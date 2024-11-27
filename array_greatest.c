#include<stdio.h>
void main(){
    int i,n[5],g;
    for(i=0;i<=4;i++){
        printf("enter an element:");
        scanf("%d",&n[i]);
    }
    printf("\narray elements are:\n");
    g=n[0];
    for(i=0;i<=4;i++){
        printf("%d\t",n[i]);
        if(n[i]>g){
            g=n[i];
        }
    }
    printf("the greatest element are:%d",g);
}