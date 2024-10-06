#include<stdio.h>
int main()
{
    int m;
    printf("enter the value");
    scanf("%d",&m);
    if(m>0){
        printf("1");
    }else if(m=0){
        printf("0");
    }else if(m<0){
        printf("-1");
    }else{
        printf("invalid");
    }
    return 0;
}