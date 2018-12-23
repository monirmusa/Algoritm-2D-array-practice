#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define max_size 1000
#define max_value 10000
#define my_inf 19999

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

void mymerge(int p, int q, int r)
{
    int i, j, k;
    int n1 = q - p + 1;
    int n2 = r - q;

    int myl[n1 + 1];
    int myr[n2 + 1];

    for(i = 0; i < n1; i++)
        myl[i] = a[p + i];

    for(j = 0; j < n2; j++)
        myr[j] = a[q + j + 1];

    myl[n1] = my_inf;
    myr[n2] = my_inf;

    i = j = 0;

    for(k = p; k <= r; k++)
    {
        if(myl[i] <= myr[j])
        {
            a[k] = myl[i];
            i++;
        }
        else
        {
            a[k] = myr[j];
            j++;
        }
    }
}

void merge_sort(int p, int r)
{
    int q;
    if(p < r)
    {
        q = (p + r)/2;
        merge_sort(p, q);
        merge_sort(q + 1, r);
        mymerge(p, q, r);
    }
}

int main()
{
    randomnumber();

    printf("Before sort\n");
    for(int i = 0; i < max_size; i++)
        printf("%d ",a[i]);

    clock_t tic = clock();
        merge_sort(0, max_size - 1);
    clock_t toc = clock();

    printf("\nAfter sort\n");
    for(int i = 0; i < max_size; i++)
        printf("%d ",a[i]);

    printf("\n%f", (double)(toc - tic) / CLOCKS_PER_SEC);

    return 0;
}
