#include <stdio.h>
#define max_size 5
int a[] = {20, 30, 40, 50, 60};
int x = 40;
int cost = 0;
bool interpolation_serach(int p, int r)
{
    cost++;
    if(r!=p && x>=a[p] && x<=a[r])
    {
       int mid=p+((r-p)*(x-a[p])/(a[r]-a[p]));
      if(a[mid] == x) return true;
        else if(a[mid] > x) return interpolation_serach(p, mid - 1);
        else return interpolation_serach(mid + 1, r);
    }
    return false;
    }
int main()
{
    if(interpolation_serach(0, max_size)) printf("Yes");
    else printf("No");

    printf("\n %d",cost);
    return 0;
}
