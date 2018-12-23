#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define max_size 1000
#define max_value 10000

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

void ins_sort()
{
    int key, i;
    for(int j=1; j<max_size; j++)
    {
        key = a[j];
        i = j - 1;
        while(i > -1 && a[i] > key)
        {
            a[i + 1] = a[i];
            i--;
        }
        a[i + 1] = key;
    }
}

int main()
{
    randomnumber();

    printf("Before sort\n");
    for(int i=0; i < max_size; i++)
        printf("%d ",a[i]);

    clock_t tic = clock();
    ins_sort();
    clock_t toc = clock();

    printf("\nAfter sort\n");
    for(int i=0; i < max_size; i++)
        printf("%d ",a[i]);

    printf("\n%f", (double)(toc - tic) / CLOCKS_PER_SEC);

    return 0;
}
