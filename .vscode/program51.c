#include<stdio.h>
int main()
{
    int n,largest=0;
    printf("enter a number:");
    scanf("%d",&n);
    do{
        int digit=n%10;
        if(digit>largest){
            largest=digit;
        }
        n/=10;
    }while(n>0);
    printf("the largest digit=%d",largest);
    return 0;
}