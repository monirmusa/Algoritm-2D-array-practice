#include<stdio.h>
int main()
{
    int i,j,r1,c1,r2,c2,k;
    int sum=0;
    int A[10][10];
    int B[10][10];
    int multiplie[10][10];

    printf("Enter Row and column number for First Matrix: ");
    scanf("%d %d",&r1,&c1);
    printf("Enter Row and column number for Second Matrix: ");
    scanf("%d %d",&r2,&c2);



    while(c1!=r2){
    printf("Not Perfect for Matrix Multiplication: \n");


    printf("Enter Row and column number for First Matrix: \n");
    scanf("%d %d",&r1,&c1);
    printf("Enter Row and column number for Second Matrix: \n");
    scanf("%d %d",&r2,&c2);






    }






   //for input;
    for(i=0;i<r1;i++)     //maximum 3 row;
    {
      for(j=0;j<c1;j++)  //maximum 4 column;

        {


        printf("[%d][%d]=",i,j);//Identify for location;
         scanf("%d",&A[i][j]);

         }
       printf("\n");
       }



    printf("\nEnter dizits for B matrix: \n");

   //for input;

    for(i=0;i<r2;i++)     //maximum 3 row;
    {
      for(j=0;j<c2;j++)  //maximum 4 column;

        {


        printf("[%d][%d]=",i,j);//Identify for location;
         scanf("%d",&B[i][j]);

         }
       printf("\n");
       }


    printf("Given Inpun Shown of A matrix: \n");

  //for output
  printf("A= ");
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

     printf("Given Inpun Shown of B matrix: \n");

  //for output
  printf("B= ");
    for(i=0;i<r2;i++)
    {
          printf("\t ");

         for(j=0;j<c2;j++)
         {
         printf("%d",B[i][j]);
         printf("  "); //space between dizits;

             }
      printf("\n");

    }

    ////////For multiplication
    //can Help==https://www.youtube.com/watch?v=eCCq0vRU5L0

    for(i=0;i<r1;i++)
    {

         for(j=0;j<c2;j++)
         {
           for(k=0;k<c1;k++){
            sum=sum + A[i][k] * B[k][j];
           }

         multiplie[i][j]=sum;
         sum=0;
         }
    }






     printf("A*B Multiplyes Result \n");
    for(i=0;i<r1;i++)
    {
          printf("\t ");

         for(j=0;j<c2;j++)
         {
         printf("%d", multiplie[i][j]);
         printf("  "); //space between dizits;

             }
      printf("\n");

    }
return 0;
}
