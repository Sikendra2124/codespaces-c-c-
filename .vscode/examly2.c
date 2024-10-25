#include<stdio.h>
int main()
{
    int angle1, angle2;
    scanf("%d",&angle1);
    scanf("%d",&angle2);
    int third_angle=180-(angle1+angle2);
    int sum_of_angles=180;
    int product_of_angles=angle1*angle2;   
    printf("third angle=%d\n",third_angle);
    printf("sum of angles=%d\n",sum_of_angles);
    printf("product of given angle=%d\n",product_of_angles); 
    return 0;
}