#include<stdio.h>
int main()
{
    int cp,sp,pl;
    printf("enter cost price");
    scanf("%d",&cp);
    printf("enter selling price");
    scanf("%d",&sp);
    if(cp>sp){
        pl=cp-sp;
        printf("loss=%d",pl);
    }else if(sp>cp){
        pl=sp-cp;
        printf("profit=%d",pl);
    }else{
        printf("no profit no loss");
    }
return 0;
}