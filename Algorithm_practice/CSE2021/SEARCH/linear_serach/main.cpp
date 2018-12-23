#include <stdio.h>
#define max_size 5

int a[] = {15, 5, 71, 2, 35};
int x = 19;

int cost = 0;

bool linear_serach()
{
    for(int i = 0; i < max_size; i++)
    {
        cost++;
        if(a[i] == x) return true;

    }

    return false;

}

int main()
{
    if(linear_serach()) printf("Yes");
    else printf("No");

    printf("\n %d",cost);
    return 0;
}
