#include<stdio.h>
int main(){
    int i,n[10],even=0,odd=0;
    for(i=0;i<=9;i++){
        printf("enter a value:");
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
    }
    printf("\ntotal number of odd=%d\n",odd);
    printf("\ntotal number of even=%d",even);
    return 0;
}