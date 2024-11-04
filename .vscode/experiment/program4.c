#include<stdio.h>
#define PI 3.14159
int main(){
    float radius,area,perimeter;
    printf("enter radius of the circle:\t");
    scanf("%f",&radius);
    area=PI*radius*radius;
    perimeter=2*PI*radius;
    printf("\nArea of circle=%f\n",area);
    printf("perimeter of circle=%f",perimeter);
    return 0;
}