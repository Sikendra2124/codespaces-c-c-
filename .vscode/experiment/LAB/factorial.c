#include<stdio.h>

int fact(int a){
    if(a==0){
        return 1;
    }else if(a==1){
        return 1;
    }else{
        return a*(fact(a-1));
    }
}


int main()
{
    int a;
    printf("enter  Value:");
    scanf("%d",&a);
    int c=fact(a);
    printf("%d",c);
}