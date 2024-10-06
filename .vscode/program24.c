#include <stdio.h>
int main()
{
    float principle, time, rate, si;
    printf("Enter the principle: ");
    scanf("%f", &principle);
    printf("enter the rate:");
    scanf("%f", &rate);
    printf("enter the time:");
    scanf("%f", &time);
    si = (principle * rate * time) / 100;
    printf("simple interest is:%f", si);
    return 0;
}