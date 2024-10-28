#include<stdio.h>
// #include<stdlib.h>
int main()
{
    float a;
    int integral_part, right_most;
    printf("enter a floating point value:");
    scanf("%f",&a);
    integral_part=(int)a;
    // right_most=abs(integral_part%10);
                if(integral_part<0){
                        integral_part=-integral_part;
                }
                        right_most=integral_part%10;
    printf("the right most digit of the integral part=%d",right_most);
    return 0;
}