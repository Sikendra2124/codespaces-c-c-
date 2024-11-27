#include<stdio.h>
void main(){
    int i,n[5];
    for(i=0;i<=4;i++){
        printf("enter an element:");
        scanf("%d",&n[i]);
    }
    for(i=0;i<=4;i++){
        printf("element %d is at %p\n",n[i],&n[i]);
    }
}