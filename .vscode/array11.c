#include<stdio.h>
int main(){
    int i,j,temp,n[5];
    for(i=0;i<=4;i++){
        printf("enter a value:");
        scanf("%d",&n[i]);
    }
    printf("\n before ascending:\n");
    for(i=0;i<=4;i++){
        printf("%d\t",n[i]);
    }
    for(i=0;i<=4;i++){
        for(j=i;j<=4;j++){
            if(n[i]>n[j]){
                temp=n[i];
                n[i]=n[j];
                n[j]=temp;
            }
        }
    }
    printf("\n after arranging ascending order is\n");
    for(i=0;i<=4;i++){
        printf("%d\t",n[i]);
    }
    return 0;
}