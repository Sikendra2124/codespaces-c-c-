#include <stdio.h>
int main()
{
    int n;
    printf("enter the value for checking even or odd:");
    scanf("%d", &n);
    if (n % 2 == 0)
    {
        printf("number is even");
    }
    else
    {
        printf("number is odd");
    }
    return 0;
}