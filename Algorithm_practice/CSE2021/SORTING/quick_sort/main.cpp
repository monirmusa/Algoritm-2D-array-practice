#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define max_size 1000
#define max_value 10000

//int a[max_size] = {91, 31, 7, 11, 100, 2, 13, 51};
int a[max_size];

void randomnumber()
{
    int i, x;
    for(i = 0; i < max_size; i++)
    {
        x = rand() % max_value + 1;
        a[i] = x;
    }
}

int mypartition(int p, int r)
{
    int x = a[p];
    int i = p;

    for(int j=i+1; j<=r; j++)
    {
        if(a[j] < x)
        {
            i++;
            int temp = a[j];
            a[j] = a[i];
            a[i] = temp;
        }
    }
    if(a[i] < x)
    {
        int temp = a[p];
        a[p] = a[i];
        a[i] = temp;
    }
    return i;
}

void quick_sort(int p, int r)
{
    int q;
    if(p < r)
    {
        q = mypartition(p, r);
        quick_sort(p, q-1);
        quick_sort(q+1, r);
    }
}

int main()
{
    randomnumber();

    printf("Before sort\n");
    for(int i=0; i < max_size; i++)
        printf("%d ",a[i]);

    clock_t tic = clock();
    quick_sort(0, max_size - 1);
    clock_t toc = clock();

    printf("\nAfter sort\n");
    for(int i=0; i < max_size; i++)
        printf("%d ",a[i]);

    printf("\n%f", (double)(toc - tic) / CLOCKS_PER_SEC);

    return 0;
}
