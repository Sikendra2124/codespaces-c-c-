#include <stdio.h>
int main()
{
    int n;
    printf("enter the value for checking even or odd:");
    scanf("%d", &n);
    if (n % 2 == 0)
    {
        printf("even");
    }
    else
    {
        printf("odd");
    }
    return 0;
}