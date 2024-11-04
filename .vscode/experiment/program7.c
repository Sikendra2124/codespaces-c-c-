#include<stdio.h>
#include<math.h>
int main(){
    float amount,principle,rate,time,compound_interest;
    printf("enter principle:\t");
    scanf("%f",&principle);
    printf("\nenter rate:\t");
    scanf("%f",&rate);
    printf("\nenter time:\t");
    scanf("%f",&time);
    amount=principle*pow((1+rate/100),time);
    compound_interest=amount-principle;
    printf("\ntotal compund interest=%.2f",compound_interest);
    printf("\ntotal amount=%.2f",amount);
    return 0;
}