#include<stdio.h>
int main()
{
    float a;
    int integral_part, right_most;
    printf("enter a floating point value:");
    scanf("%f",&a);
    integral_part=(int)a;
    right_most=abs(integral_part%10);
    printf("the right most digit of the integral part=%d",right_most);
    return 0;
}