
#include<stdio.h>
int main()
{
    int i,j,r1,c1,r2,c2;
    int sum=0;
    int A[10][10];
    int TransPose[10][10];//row will be column,column will be row;


   printf("Enter Row and Column number: ");
   scanf("%d %d",&r1,&c1);


   //for input;
    for(i=0;i<r1;i++)
    {
      for(j=0;j<c1;j++)
        {
         printf("[%d][%d]=",i,j);//Identify for location;
         scanf("%d",&A[i][j]);

         }
       printf("\n");
       }

   printf("Given Inpun Shown of A matrix: \n");

  //for output

    for(i=0;i<r1;i++)
    {
          printf("\t ");
          for(j=0;j<c1;j++)
         {
         printf("%d",A[i][j]);
         printf("  "); //space between dizits;


        }
      printf("\n");
    }


    //Making  Transpose



    for(i=0;i<r1;i++)
    {

          for(j=0;j<c1;j++)
         {

      TransPose[j][i]=A[i][j];
        }

    }







     printf("Given Input Shown As Transpose Materix\n");

  //for output
    for(i=0;i<c1;i++)
    {
           printf("\t ");
         for(j=0;j<r1;j++)
         {
         printf("%d",TransPose[i][j]);
         printf("  ");
             }
      printf("\n");

    }
    return 0;
}
