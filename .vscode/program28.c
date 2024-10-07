#include<stdio.h>
int main()
{
    int i,n,s=0;
    printf("enter the no of terms");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s=s+i;
    }
    printf("sum of series=%d",s);
    return 0;
}