#include<stdio.h>
int main()
{
    int i,j;
    int Two[3][4];
    printf("Enter 3*4=12 dizit: \n");

   //for input;
    for(i=0;i<3;i++)     //maximum 3 row
    {
        for(j=0;j<4;j++)      //maximum 4 column
        {
         scanf("%d",&Two[i][j]);

        }

    }

     printf("Given Inpun Shown: \n");

  //for output
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
         printf("%d",Two[i][j]);
          printf("  "); //space between dizits;


        }
      printf("\n");
    }



    return 0;
    }
