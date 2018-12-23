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

void bubble_sort()
{
    for(int i=0; i<max_size-1; i++)
        for(int j=i+1; j<max_size; j++)
            if(a[j] < a[i])
            {
                int k = a[i];
                a[i] = a[j];
                a[j] = k;
            }
}

int main()
{
    randomnumber();

    printf("Before sort\n");
    for(int i=0; i < max_size; i++)
        printf("%d ",a[i]);

    clock_t tic = clock();
    bubble_sort();
    clock_t toc = clock();

    printf("\nAfter sort\n");
    for(int i=0; i < max_size; i++)
        printf("%d ",a[i]);

    printf("\n%f", (double)(toc - tic) / CLOCKS_PER_SEC);

    return 0;
}
