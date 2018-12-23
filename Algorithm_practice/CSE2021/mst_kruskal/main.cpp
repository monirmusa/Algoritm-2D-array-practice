#include<stdio.h>
#include<stdlib.h>

#define max_vertex 500

int **g;
int **rg;
int vertex, edge;

typedef struct
{
    int u;
    int v;
    int c;
} edges;

typedef struct
{
    int p;
    int r = 0;
} vertices;

edges *myedge, tempedge;
vertices *myvertex;

void make_set(int v)
{
    myvertex[v].p = v;
    myvertex[v].r = 0;
}

int find_set(int v)
{
    if(v != myvertex[v].p)
        myvertex[v].p = find_set(myvertex[v].p);

    return myvertex[v].p;
}

void link_set(int x, int y)
{
    if(myvertex[x].r > myvertex[y].r)
    {
        myvertex[y].p = x;
        myvertex[x].r++;
    }
    else
    {
        myvertex[x].p = y;
        myvertex[y].r++;
    }
}

void union_set(int x, int y)
{
    link_set(find_set(x), find_set(y));
}

void kruskal()
{
    for(int i=0; i<vertex; i++)
        make_set(i);

    for(int i=0; i<edge-1; i++)
        for(int j=i+1; j<edge; j++)
            if(myedge[j].c < myedge[i].c)
            {
                tempedge = myedge[i];
                myedge[i] = myedge[j];
                myedge[j] = tempedge;
            }

    for(int i=0; i<edge; i++)
    {
        if(find_set(myedge[i].u) != find_set(myedge[i].v))
        {
            //printf("\n %d %d",myedge[i].u,myedge[i].v);
            rg[myedge[i].u][myedge[i].v] = myedge[i].c;
            rg[myedge[i].v][myedge[i].u] = myedge[i].c;

            union_set(myedge[i].u, myedge[i].v);
        }
    }
}

int main()
{
    int u, v, c;

    g = (int **)malloc(max_vertex * sizeof(int *));
    for(int i=0; i<max_vertex; i++)
        g[i] = (int *)malloc(max_vertex * sizeof(int));

    rg = (int **)malloc(max_vertex * sizeof(int *));
    for(int i=0; i<max_vertex; i++)
        rg[i] = (int *)malloc(max_vertex * sizeof(int));


    printf("Enter Vertex : ");
    scanf("%d",&vertex);

    myvertex = (vertices *)malloc(vertex * sizeof(vertices));

    printf("Enter Edge : ");
    scanf("%d",&edge);

    myedge = (edges *)malloc(edge * sizeof(edges));

    for(int i=0; i<vertex; i++)
        for(int j=0; j<vertex; j++)
        {
            g[i][j] = 0;
            rg[i][j] = 0;
        }

    printf("\n");
    for(int i=0; i<vertex; i++)
    {
        for(int j=0; j<vertex; j++)
            printf("%d ",g[i][j]);
        printf("\n");
    }

    for(int i=0; i<edge; i++)
    {
        scanf("%d",&u);
        scanf("%d",&v);
        scanf("%d",&c);

        g[u][v] = c;
        g[v][u] = c;

        myedge[i].u = u;
        myedge[i].v = v;
        myedge[i].c = c;
    }

    printf("\n");
    for(int i=0; i<vertex; i++)
    {
        for(int j=0; j<vertex; j++)
            printf("%d ",g[i][j]);
        printf("\n");
    }

    kruskal();

    printf("\n");
    for(int i=0; i<vertex; i++)
    {
        for(int j=0; j<vertex; j++)
            printf("%d ",rg[i][j]);
        printf("\n");
    }

    return 0;
}
