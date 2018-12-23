#include<stdio.h>
#include<stdlib.h>

#define max_vertex 500

int **g; //double pointer for 2d array
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
    int p;   //parent
    int r = 0; //child ba rank
} vertices;

edges *myedge, tempedge;
vertices *myvertex;//vertices data type a myvertex 1 ta veriable
// jate mon moto vertex rakha jabe

void make_set(int v)
{
    myvertex[v].p = v;//vertex nije //vertex er parent

    myvertex[v].r = 0;   //vertex initially 0//vertex er rank ba children
}

int find_set(int v)
{
    if(v != myvertex[v].p)
        myvertex[v].p = find_set(myvertex[v].p);

    return myvertex[v].p;
}
//2 ta set ke linkup kore parent child banabo
void link_set(int x, int y)// x or y make parent or child
{    //r =rank or child
    // jar rank basi se parent
    if(myvertex[x].r > myvertex[y].r) //proti eleiment er rank/chilr
        //.....check koraci .//x er rank besi hole if a dukbe
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
      //real kaj;;
  //Bubble sort  eadge er upor depend kore minimum age ke nibo
        //age dore tan dile u,v asbe
        //erpor u ,v er parent list check korbo
        // no common parent hole no cycle form
        //no cycle form theke coto maner age nibo

void kruskal()
{
    for(int i=0; i<vertex; i++)
        make_set(i); //i  holo vertex  ja  make_set a jacce



      //Bubble sort  eadge er upor depend kore minimum age ke nibo
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
      //int g[max_vertex][max_vertex]  ke direct 2d array te pointer use
      //kore nea jae na dynamically c language a .......ty nicher process
    g = (int **)malloc(max_vertex * sizeof(int *));
    for(int i=0; i<max_vertex; i++)
        g[i] = (int *)malloc(max_vertex * sizeof(int));

    rg = (int **)malloc(max_vertex * sizeof(int *));
    for(int i=0; i<max_vertex; i++)
        rg[i] = (int *)malloc(max_vertex * sizeof(int));

////  0 0 akarer matrix banaeci emnitae show korate
//99 theke 122 no line
    printf("Enter Vertex : ");
    scanf("%d",&vertex);

    myvertex = (vertices *)malloc(vertex * sizeof(vertices));//struct er
    //variable myvertex  a mon moto vertex nite,,,,,age er belaeo same//

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
    ////  0 0 akarer matrix banaeci emnitae show korate
//99 theke 122 no line


//
//akhon real matrix san kora hobe//
    for(int i=0; i<edge; i++)
    {
        scanf("%d",&u);
        scanf("%d",&v);
        scanf("%d",&c);

        g[u][v] = c;
        g[v][u] = c;

        myedge[i].u = u; //1 no=U(1).....(cost)(1).......V(1)  ==ae akarer kaj korte
        myedge[i].v = v; //2 no=U(2).....(cost)(2).......V(2)
        myedge[i].c = c;//age number dite a= 1,b=2??
    }
     // ja dilam ty print korlo without kruskal
    printf("\n");
    for(int i=0; i<vertex; i++)
    {
        for(int j=0; j<vertex; j++)
            printf("%d ",g[i][j]);
        printf("\n");
    }

    kruskal();
    // kruskal er kaj ses kore print ta dekhabe;

    printf("\n");
    for(int i=0; i<vertex; i++)
    {
        for(int j=0; j<vertex; j++)
            printf("%d ",rg[i][j]);
        printf("\n");
    }

    return 0;
}
