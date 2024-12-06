#include<stdio.h>
int main(){
    float base,height,area;
    printf("enter base and height:\t");
    scanf("%f%f",&base,&height);
    area=0.5*base*height;
    printf("\narea of triangle=%f",area);
    return 0;
}