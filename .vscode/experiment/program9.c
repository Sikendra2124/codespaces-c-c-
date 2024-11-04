#include<stdio.h>
int main(){
    int a,b,greatest;
    printf("enter the value of a and b:\t");
    scanf("%d%d",&a,&b);
    greatest=((a>b)?a:b);
    printf("greatest value=%d",greatest);
}