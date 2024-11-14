#include<stdio.h>
int main(){
    int i,a[5],b[5],c[5];
    for(i=0;i<=4;i++){
        printf("enter a value for A:");
        scanf("%d",&a[i]);
    }
    printf("\n-----------------------------\n");
    for(i=0;i<=4;i++){
        printf("enter a value for B:");
        scanf("%d",&b[i]);
    }
    printf("\n-----------------------------\n");
    for(i=0;i<=4;i++){
        c[i]=a[i]+b[i];
        printf("%d  +  %d  =  %d\n",a[i],b[i],c[i]);
    }
    return 0;
}