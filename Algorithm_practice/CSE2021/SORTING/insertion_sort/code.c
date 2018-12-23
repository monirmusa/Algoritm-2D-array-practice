#include <stdio.h>
int main()
{
    int a, b, c, d, e, s ;
    printf("Enter Number = ");
    scanf("%d",&a);
    b=a%10;
    a=a/10;
    c=a%10;
    a=a/10;
    d=a%10;
    a=a/10;
    e=a%10;
    a=a/10;
    s=a+b+c+d+e;
    printf("Sum = %d",s);
    return 0;
}
