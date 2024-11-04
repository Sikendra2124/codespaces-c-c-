#include<stdio.h>
int main(){
    int num;
    printf("enter a value:\t");
    scanf("%d",&num);
    if(num>0 && (num & (num-1))==0){
        printf("%d is an exact power of 2",num);
    }else{
        printf("%d is not an exact power of 2",num);
    }
    return 0;
}