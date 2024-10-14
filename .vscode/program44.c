#include<stdio.h>
int main()
{
    int n=7,number;
    
    do{
    printf("guess a predefined number");
    scanf("%d",&number);
    if(number!=n){
        printf("incorrect! please try again\n");
    }
    }
    while(number!=n);
    
        printf("correct! you guess correct number");
    
    return 0;
}