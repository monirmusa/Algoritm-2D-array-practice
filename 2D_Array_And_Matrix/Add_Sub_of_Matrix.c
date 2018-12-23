#include<stdio.h>
int main()
{
    int i,j,numberOf_Row,numberOf_Column;
    int A[10][10];
    int B[10][10];
    int C[10][10];
    int D[10][10];


    printf("Enter Row and column number:");
    scanf("%d %d",&numberOf_Row,&numberOf_Column);

    printf("Enter dizits for A matrix: \n");

   //for input;
    for(i=0;i<numberOf_Row;i++)     //maximum 3 row;
    {
      for(j=0;j<numberOf_Column;j++)  //maximum 4 column;

        {


        printf("[%d][%d]=",i,j);//Identify for location;
         scanf("%d",&A[i][j]);

         }
       printf("\n");
       }



    printf("\nEnter dizits for B matrix: \n");

   //for input;

    for(i=0;i<numberOf_Row;i++)     //maximum 3 row;
    {
      for(j=0;j<numberOf_Column;j++)  //maximum 4 column;

        {


        printf("[%d][%d]=",i,j);//Identify for location;
         scanf("%d",&B[i][j]);

         }
       printf("\n");
       }


    printf("Given Inpun Shown of A matrix: \n");

  //for output
  printf("A= ");
    for(i=0;i<numberOf_Row;i++)
    {
          printf("\t ");
          for(j=0;j<numberOf_Column;j++)
         {
         printf("%d",A[i][j]);
         printf("  "); //space between dizits;


        }
      printf("\n");
    }

     printf("Given Inpun Shown of B matrix: \n");

  //for output
  printf("B= ");
    for(i=0;i<numberOf_Row;i++)
    {
          printf("\t ");

         for(j=0;j<numberOf_Column;j++)
         {
         printf("%d",B[i][j]);
         printf("  "); //space between dizits;

             }
      printf("\n");

    }


  //////ADDITION


    for(i=0;i<numberOf_Row;i++)     //maximum 3 row;
    {
      for(j=0;j<numberOf_Column;j++)  //maximum 4 column;

        {

         C[i][j]=A[i][j]+B[i][j];//Addition;


         }

       }




     printf("Addition result of (A+B) matrix \n");

  //for output

    for(i=0;i<numberOf_Row;i++)
    {
          printf("\t ");

         for(j=0;j<numberOf_Column;j++)
         {
            printf("%d",C[i][j]);
         printf("  "); //space between dizits;

             }
      printf("\n");

    }


/////SUBSTRACTION


    for(i=0;i<numberOf_Row;i++)     //maximum 3 row;
    {
      for(j=0;j<numberOf_Column;j++)  //maximum 4 column;

        {


         D[i][j]=A[i][j]-B[i][j];//substraction;

         }

       }

     printf("Substraction result of (A-B) matrix \n");

     for(i=0;i<numberOf_Row;i++)
    {
          printf("\t ");

         for(j=0;j<numberOf_Column;j++)
         {
            printf("%d",D[i][j]);
         printf("  "); //space between dizits;

             }
      printf("\n");

    }
return 0;
}
