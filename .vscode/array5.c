#include<stdio.h>
int main(){
    int i,n[5],sq[5];
    for(i=0;i<=4;i++){
        printf("enter a value");
        scanf("%d",&n[i]);
    }
    printf("array values are:\n");
    for(i=0;i<=4;i++){
        printf("%d\t",n[i]);
        sq[i]=n[i]*n[i];
    }
    printf("\n after squaring elements:\n");
    for (i = 0; i <=4; i++)
    {
        printf("%d\t",sq[i]);
    }
    return 0;
    
}