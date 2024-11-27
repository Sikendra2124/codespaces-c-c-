#include<stdio.h>
void main(){
    int i,n[5];
    for(i=0;i<=4;i++){
        printf("enter a value:");
        scanf("%d",&n[i]);
    }
    printf("array elements are:");
    for(i=0;i<=5;i++){
        printf("%d\t",n[i]);
    }
}