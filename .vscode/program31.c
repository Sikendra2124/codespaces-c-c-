#include<stdio.h>
int main()
{   
    int n,sum=0;
    for(int i=1;i<=10;i++)
    {
        printf("enter an number");
        scanf("%d",&n);
        sum=sum+i;
    }
    printf("sum of 10 numbers=%d",sum);
    printf("average of the number=%d",sum/n);
}