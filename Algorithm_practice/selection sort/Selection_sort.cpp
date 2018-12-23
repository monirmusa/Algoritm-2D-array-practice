#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define max_size 1000
#define max_value 10000

//int a[max_size];

//void rando mnumber()
//{
   // int i, x;
   // for(i = 0; i < max_size; i++)
    //{
      //  x = rand() % max_value + 1;
        //a[i] = x;
    //}
//}

void selection_sort()
{
    int a[i];
   for(int i = 0; i <  max_size - 1; i++)
   {
       int minv = a[i];
       int minp = i;

       for(int j = i+1; j <  max_size; j++)
           if(a[j] < minv)
           {
                minv = a[j];
                minp = j;
           }
        int x = a[i];
        a[i] = a[minp];
        a[minp] = x;
   }
}

int main()
{
int a[i];
      for(int i=0; i < max_size; i++)
        scanf("%d ",&a[i]);
    //randomnumber();
      printf("Before sort\n");
    for(int i=0; i < max_size; i++)
        printf("%d ",a[i]);

    clock_t tic = clock();
    selection_sort();
    clock_t toc = clock();

    printf("\nAfter sort\n");
    for(int i=0; i < max_size; i++)
        printf("%d ",a[i]);

    printf("\n%f", (double)(toc - tic) / CLOCKS_PER_SEC);

    return 0;
  }
