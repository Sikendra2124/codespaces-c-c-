#include<stdio.h>
int main(){
    int number;
    printf("enter a value:\t");
    scanf("%d",&number);
    printf("%d is %s\n",number,(number%2==0)?"even":"odd");
}