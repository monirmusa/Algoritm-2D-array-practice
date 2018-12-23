#include<stdio.h>
int main()
{
    int i,j;
    int TwoDimention[3][4];
    int count=0;
    printf("Enter 3*4=12 dizit: \n");

   //for input;
    for(i=0;i<3;i++)     //maximum 3 row
    {

          count++;
        for(j=0;j<4;j++)      //maximum 4 column;
        {


         scanf("%d",&TwoDimention[i][j]);

        }

    }



     printf("Given Inpun Shown: \n");

  //for output
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
         printf("%d",TwoDimention[i][j]);
          printf("  "); //space between dizits;


        }
      printf("\n");
    }



    return 0;
    }
