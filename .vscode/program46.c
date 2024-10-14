#include<stdio.h>
int main()
{
    int a=123,n;
    do{
        printf("enter the password:");
        scanf("%d",&n);
        if(a!=n){
            printf("incorrect! please try again\n");
        }
    }
     while(a!=n);
     printf("correct! password");
     return 0;
}