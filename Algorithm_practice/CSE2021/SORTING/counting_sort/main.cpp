#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define max_size 30
#define max_value 5

int a[max_size];
int b[max_size];
int *c;
int my_max = 0;

void randomnumber()
{
    int i, x;
    for(i = 0; i < max_size; i++)
    {
        x = rand() % max_value + 1;
        a[i] = x;
        b[i] = 0;
        if(x > my_max) my_max = x;
    }
}

void counting_sort()
{
    for(int i = 0; i < max_size; i++)
        c[a[i]]++;

    for(int i = 1; i <= my_max; i++)
        c[i] += c[i - 1];

    for(int i = max_size - 1; i >= 0; i--)
       b[--c[a[i]]] = a[i];
}

int main()
{
    randomnumber();

    printf("Before sort\n");
    for(int i = 0; i < max_size; i++)
        printf("%d ",a[i]);

    c = (int *) malloc ((my_max+1) * sizeof(int));
    for(int i = 0; i <= my_max; i++)
        c[i] = 0;

    clock_t tic = clock();
       counting_sort();
    clock_t toc = clock();

    printf("\nAfter sort\n");
    for(int i = 0; i < max_size; i++)
        printf("%d ",b[i]);

    printf("\n%f", (double)(toc - tic) / CLOCKS_PER_SEC);

    return 0;
}
