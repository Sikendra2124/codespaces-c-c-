#include<stdio.h>
int main()
{
    int i,n,sum=0,t;
    const int x=9;
    printf("enter the number of terms");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        t=x*10+9;
        sum=sum+t;
    }
    printf("sum of series=%d",sum);
}