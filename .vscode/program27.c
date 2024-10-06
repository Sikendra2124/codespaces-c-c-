#include<stdio.h>
int main()
{
    int a,b,t;
    printf("enter the first value");
    scanf("%d",&a);
    printf("enter the second value");
    scanf("%d",&b);
    t=a;
    a=b;
    b=t;
    printf("after swapping the values of a=%d b=%d",a,b);
    return 0;

}