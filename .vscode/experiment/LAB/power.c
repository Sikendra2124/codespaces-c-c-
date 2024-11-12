#include<stdio.h>
int power(int b, int e){
    if(e==0){
        return 1;
    }
    else if(e<0){
        return 1;
    }
    else{
        return b*power(b,e-1);
    }
}

int main(){
    int b,e;
    printf("enter base:");
    scanf("%d",&b);
    printf("enter exponent:");
    scanf("%d",&e);
    int p=power(b,e);
    printf("%d ^ %d = %d",b,e,p);
}