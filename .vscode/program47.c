#include<stdio.h>
int main()
{
    int number;
    do{
        printf("enter a number:");
        scanf("%d",&number);
        if(number%2!=0){
            printf("that is not a even number!\n");
        }
    }while(number%2!=0);
    printf("thanks you! %d is even number",number);
    return 0;
}