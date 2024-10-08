#include<stdio.h>
int main()
{
    int i,n;
    printf("enter the number of terms");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("cube of%d=%d\n",i,(i*i*i));
    }
    return 0;
}