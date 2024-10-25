#include<stdio.h>
int main()
{
    int n, rev=0, rem;
    printf("enter a number");
    scanf("%d",&n);
    do
    {
        n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    while(n!=0);
    printf("reverse number is=%d",rev);
}