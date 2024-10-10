#include<stdio.h>
int main()
{
    int i,n,sum=0,t=9;
    printf("enter the number of terms");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+t;
        // printf(t);
        t=t*10+9;
    }
    printf("sum of series=%d",sum);
    return 0;
}