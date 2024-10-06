#include <stdio.h>
int main()
{
    int a, fact = 1;
    printf("enter the value:");
    scanf("%d", &a);
    if (a % 2 == 0)
    {
        for (int i = a; i >= 1; i--)
        {
            fact = fact * i;
        }
        printf(" Even and factorial is : %d", fact);
    }
    else
    {
        printf("Not Even");
    }
}