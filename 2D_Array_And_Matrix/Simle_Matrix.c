#include<stdio.h>
int main()
{
    int i,j;
    int A[3][4];
    int B[3][4];

    printf("Enter 3*4=12 dizit for A matrix: \n");

   //for input;
    for(i=0;i<3;i++)     //maximum 3 row;
    {
      for(j=0;j<4;j++)  //maximum 4 column;

        {


        printf("[%d][%d]=",i,j);//Identify for location;
         scanf("%d",&A[i][j]);

         }
       printf("\n");
       }



     printf("Given Inpun Shown of A matrix: \n");

  //for output
  printf("A= ");
    for(i=0;i<3;i++)
    {
          printf("\t ");
          for(j=0;j<4;j++)
         {
         printf("%d",A[i][j]);
         printf("  "); //space between dizits;


        }
      printf("\n");
    }




    printf("\nEnter 3*4=12 dizit for B matrix: \n");

   //for input;

    for(i=0;i<3;i++)     //maximum 3 row;
    {
      for(j=0;j<4;j++)  //maximum 4 column;

        {


        printf("[%d][%d]=",i,j);//Identify for location;
         scanf("%d",&B[i][j]);

         }
       printf("\n");
       }




     printf("Given Inpun Shown of B matrix: \n");

  //for output
  printf("B= ");
    for(i=0;i<3;i++)
    {
          printf("\t ");

         for(j=0;j<4;j++)
         {
         printf("%d",B[i][j]);
         printf("  "); //space between dizits;

             }
      printf("\n");
    }
return 0;
}
