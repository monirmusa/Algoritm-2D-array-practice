#include <stdio.h>
#define max_size 5

int a[] = {20, 30, 40, 50, 60};
int x = 19;

int cost = 0;
bool binary_serach(int p, int r)
{
    cost++;
    if(p < r)
    {
        int mid = (p + r)/2;

        if(a[mid] == x) return true;
        else if(a[mid] > x) return binary_serach(p, mid - 1);
        else return binary_serach(mid + 1, r);
    }
    return false;
}

int main()
{
    if(binary_serach(0, max_size)) printf("Yes");
    else printf("No");

    printf("\n %d",cost);
    return 0;
}
