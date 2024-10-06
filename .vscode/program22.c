#include<stdio.h>
int main()
{
int a,b,c;
printf("enter the value of a:");
scanf("%d",&a);
printf("enter the value of b:");
scanf("%d",&b);
printf("enter the value of c:");
scanf("%d",&c);
if(a>c)
{
    if(a>b)
    {
        printf("largest value:%d",a);
    }
    else
    {
        printf("largest value:%d",b);
    }
}
else{
    printf("largest value:%d",c);
}
}
