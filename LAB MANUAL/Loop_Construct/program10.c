#include<stdio.h>
int main()
{
    int a, cd, n;
    double res = 0.0;
    
    printf("Enter the Number of terms : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
     
        res = res + (1.0/i);
        
    }

    printf("Result : %lf", res);
    
    return 0;
}

