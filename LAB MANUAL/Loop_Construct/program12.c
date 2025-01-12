#include<stdio.h>
int main()
{
    int num, i=0;
    printf("Enter a Number you wish to find Square Root of : ");
    scanf("%d", &num);

    while (i*i <= num)
    {
        i += 1;
    }
    
    printf("Square Root : %d", i-1);
    return 0;
}