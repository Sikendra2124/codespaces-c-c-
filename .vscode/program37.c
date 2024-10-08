#include<stdio.h>
int main()
{
    int i,n;
    float sum=0.0;
    printf("enter the number of terms:");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        sum=sum+1.0/(i*i*i);
    }
    printf("sum of the series=%.4f",sum);
    return 0;
}