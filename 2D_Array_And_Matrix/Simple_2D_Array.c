#include<stdio.h>
int main()
{
    int i,j;
    int Two_D[3][4]={ {1,2,3,4},{5,6,7,8},{9,10,11,12} };//3 column,4 row

      printf("Two Dimentional Array:\n");

    for(i=0;i<3;i++)     //maximum 3 row
    {
        for(j=0;j<4;j++)      //maximum 4 column
        {
         printf("%d",Two_D[i][j]);
          printf("  "); //for space;

        }
      printf("\n");
    }



    return 0;

}
