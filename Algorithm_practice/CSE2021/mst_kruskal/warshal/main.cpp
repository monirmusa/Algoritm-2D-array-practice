#include <stdio.h>
#include <stdlib.h>
#define inf 999
#define max_vertex 5

int **g, **rg;
int vertex, edge;

void warshal()
{
    int k = 0;
    for(int k=0; k<vertex;)
    {
        int pri_val = 0;
        int cal_val = 0;

        for(int i=0; i<vertex; i++)
            for(int j=0; j<vertex; j++)
            {
                pri_val = rg[i][j];
                cal_val = g[i][k] + g[k][j];
                if(cal_val < pri_val) rg[i][j] = cal_val;
            }

        printf("\nPrint rg : %d\n",k++);
        for(int i=0; i<vertex; i++)
        {
            for(int j=0; j<vertex; j++)
                printf("%d ",rg[i][j]);
            printf("\n");
        }
    }
}

int main()
{
    int u, v, c;

    printf("\nEnter Vertex : ");
    //scanf("%d",&vertex);
    vertex = 5;

    g = (int **)malloc(max_vertex * sizeof(int *));
    rg = (int **)malloc(max_vertex * sizeof(int *));
    for(int i=0; i<max_vertex; i++)
    {
        g[i] = (int *)malloc(max_vertex * sizeof(int));
        rg[i] = (int *)malloc(max_vertex * sizeof(int));
    }

    for(int i=0; i<vertex; i++)
        for(int j=0; j<vertex; j++)
        {
            g[i][j] = 0;
            rg[i][j] = inf;
            if(i==j) rg[i][j] = 0;
        }

    printf("\nEnter Edge : ");
    //scanf("%d",&edge);
    edge = 9;

    /*for(int i=0; i<edge; i++)
    {
        scanf("%d",&u);
        scanf("%d",&v);
        scanf("%d",&c);

        g[u][v] = c;
        g[v][u] = c;
    }*/

    g[0][1] = 10; g[1][0] = 10;
    g[0][2] = 12; g[2][0] = 12;
    g[0][4] = 7; g[4][0] = 7;
    g[1][2] = 15; g[2][1] = 15;
    g[1][3] = 7; g[3][1] = 7;
    g[1][4] = 10; g[4][1] = 10;
    g[2][3] = 5; g[3][2] = 5;
    g[2][4] = 8; g[4][2] = 8;
    g[3][4] = 7; g[4][3] = 7;

    printf("\nPrint Graph : \n");
    for(int i=0; i<vertex; i++)
    {
        for(int j=0; j<vertex; j++)
            printf("%d ",g[i][j]);
        printf("\n");
    }

    printf("\nPrint rg : \n");
    for(int i=0; i<vertex; i++)
    {
        for(int j=0; j<vertex; j++)
            printf("%d ",rg[i][j]);
        printf("\n");
    }

    warshal();

    return 0;
}
