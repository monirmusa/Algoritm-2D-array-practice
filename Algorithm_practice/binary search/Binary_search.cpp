#include<stdio.h>
#define max_size 5

int a[]={10,12,3,17,9};
int x=9;
bool binary_searc(int p,int r){
    if(p<r)
    {
       int mid =(p+r)/2;
        if (a[mid]==x) return true;
        else if (a[mid]>x)return binary_searc(p,mid-1);
        else return binary_searc(mid+1,r);
    }
  return false;
  }

int main(){

if(binary_searc(0,max_size)) printf("yes");
else printf("no");
return 0;
}
