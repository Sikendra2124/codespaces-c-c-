#include<stdio.h>
int main()
{
    int i,n;
    printf("enter the value for the table");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        printf("%d\n",(i*n));
    }
    return 0;
}