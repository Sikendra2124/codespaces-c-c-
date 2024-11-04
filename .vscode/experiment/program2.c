#include<stdio.h>
int main(){
    float celsius,fahrenheit;
    printf("***celcious to Fahrenheit***\n");
    printf("enter celcious:\t");
    scanf("%f",&celsius);
    fahrenheit=(celsius*9/5)+32;
    printf("converted celcius=%f",fahrenheit);
    return 0;
}