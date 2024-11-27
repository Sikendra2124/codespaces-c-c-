#include<stdio.h>
void main(){
    int i,n[10],even=0,odd=0;
    for(i=0;i<=9;i++){
        printf("enter a element:");
        scanf("%d",&n[i]);
    }
    printf("\narray values are:\n");
    for(i=0;i<=9;i++){
        printf("%d\t",n[i]);
        if(n[i]%2==0){
            even++;
        }else{
            odd++;
        }
        printf("\n total even elements are:%d",even);
        printf("\n total odd elements are:%d",odd);
    }
}