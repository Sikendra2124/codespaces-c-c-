#include<stdio.h>
int main(){
    int number;
    printf("enter a value:");
    scanf("%d",&number);
    if(number & 1){
        printf("%d is odd\n",number);
    }else{
        printf("%d is even\n");
    }
    return 0;
}