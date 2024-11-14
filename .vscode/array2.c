#include<stdio.h>
int main(){
    int i,n[5];
    for(i=0;i<=4;i++){
        printf("enter a value:");
        scanf("%d",&n[i]);
    }
    printf("array values are:\n");
    for(i=1;i<=4;i++){
        printf("element at index %d is %d\n",i,n[i]);
    }
    return 0;
}