#include<stdio.h>
int main()
{
    int a, b, mul=1, quot, i;
    printf("Enter Dividend : ");
    scanf("%d", &a);
    printf("Enter Divisor : ");
    scanf("%d", &b);
    
    for (i = 1; mul < a; i++)
    {
        mul = mul+b;
    }
    quot = i-1;
    
    printf("Quotient = %d", quot);

    return 0;
}