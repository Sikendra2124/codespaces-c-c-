#include<stdio.h>
int main(){
    int i,n[6];
    for(i=0;i<=5;i++){
        printf("enter a value:");
        scanf("%d",&n[i]);
    }
    printf("---accepted values with address---");
    for(i=0;i<=5;i++){
        printf("element %d is located at address %u\n",n[i],&n[i]);
    }
    return 0;
}