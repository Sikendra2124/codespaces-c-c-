#include<stdio.h>
void main(){
    int i,n[5],j,m[5];
    for(i=0;i<=4;i++){
        printf("enter an element:");
        scanf("%d",&n[i]);
    }
    i--;
    for(j=0;j<=4;j++){
        m[j]=n[i];
        i--;
    }
    printf("our accepted value are:");
    for(i=0;i<=4;i++){
        printf("%d\t",n[i]);
    }
            printf("after reversiing ");
            for(i=0;i<=4;i++){
                printf("%d\t",m[i]);
            }
}