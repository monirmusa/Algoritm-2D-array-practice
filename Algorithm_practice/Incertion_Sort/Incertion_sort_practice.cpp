#include<stdio.h>
#include<stdlib.h>

#define max_value 1000
#define max_size 100

int a[max_size];
void randomnumber()
{
    int i,x;
    for(i=0;i<max_size;i++)
    {
      x= rand()% max_value +1;
      a[i]=x;
    }


}

void incersion_sort()
{
   int i,key;
    for(int j=1; j<max_size; j++)
{


         key=a[j];
          i = j-1;
       while(i>-1 &&  a[i]>key)
       {
           a[i+1]=a[i];
           i--;

       }

      a[i+1]=key;
}
}





int main(){


randomnumber();
printf("before sort");
for(int i=0;i<max_size;i++)
    printf("%d \t",a[i]);
incersion_sort();
printf("after sort");
for(int i=0;i<max_size;i++)
  printf("%d \t",a[i]);



return 0;

}
