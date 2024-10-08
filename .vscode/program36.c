#include<stdio.h>
int main()
{
    int i,n;
    float sum=0.0;
    printf("enter a value for number of terms");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+1.0/i;
    }
    printf("sum of the series=%.2f",sum);
    return 0;
}