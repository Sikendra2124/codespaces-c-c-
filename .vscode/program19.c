#include <stdio.h>
#include <math.h>
int main()
{
    float amount, principal, rate, time_period, CI;
    int n;
    printf("Enter the principal amount:");
    scanf("%f", &principal);
    printf("Enter the time period:");
    scanf("%f", &time_period);
    printf("enter the interest rate:");
    scanf("%f", &rate);
    printf("enter the number of times interest applied per time:");
    scanf("%d", &n);
    amount = principal * (pow((1 + (rate / (n * 100))), n * time_period));
    printf("compound interest=%f", amount);
    return 0;
}