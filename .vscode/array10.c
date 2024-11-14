#include<stdio.h>
int main(){
    int i,j,n[5];
    for(i=0;i<5;i++){
        printf("enter a value:");
        scanf("%d",&n[i]);
    }
    for(i=0;i<5;i++){
        for(j=0;j<=i;j++){
            printf("%d\t",n[j]);
        }
        printf("\n");
    }
    return 0;
}