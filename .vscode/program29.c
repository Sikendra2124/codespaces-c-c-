#include<stdio.h>
int main()
{
    int n,i,f=1;
    printf("enter a value");
    scanf("%d",&n);
    for ( i=1; i<=n; i++)
    {
        f=f*i;
    }
    printf("a factorial value=%d",f);
    return 0;
}