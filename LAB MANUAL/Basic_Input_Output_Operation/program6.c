#include<stdio.h>
int main(){
    float SI,principal,rate,time;
    printf("enter principal value\t");
    scanf("%f",&principal);
    printf("\nenter rate:\t");
    scanf("%f",&rate);
    printf("\nenter time:\t");
    scanf("%f",&time);
    SI=(principal*rate*time)/100;
    printf("\n\nprincipal amount=%.2f",SI);
    return 0;
}