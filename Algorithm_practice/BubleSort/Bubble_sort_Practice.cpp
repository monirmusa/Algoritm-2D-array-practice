#include<stdio.h>
#include<stdlib.h>

#define max_value 1000
#define max_size 100

int a[max_size];

randomnumber(){
 int i,x;
 for(i=0; i<max_size; i++)
  {

   x=rand()% max_value+1;
    a[i]=x;

}


}


void bubble_sort(){

  int temp,j,i;
  for(i=0;i<max_size-1;i++)
    {
  for(j=i+1; j<max_size;j++)

  {
      if (a[i]>a[j])
      {
          temp=a[i];
          a[i]=a[j];
          a[j]= temp;


      }
  }

    }


}




int main(){

randomnumber();
 printf("before sort");
    for(int i=0;i<max_size;i++)
    printf("%d\t",a[i]);
    bubble_sort();
printf("after sort");
    for(int i=0;i<max_size;i++)
    printf("%d\t",a[i]);




}
