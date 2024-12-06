#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c,discriminant,root1,root2;
    printf("enter value of a,b,c:\t");
    scanf("%f%f%f",&a,&b,&c);
    discriminant=(b*b)-(4*a*c);
    if(discriminant>=0){
        root1=(-b+sqrt(discriminant))/(2*a);
        root2=(-b-sqrt(discriminant))/(2*a);
        printf("root1=%.2f\n",root1);
        printf("root2=%.2f\n",root2);
    }else{
        printf("the equation has no real roots");
    }
    return 0;
}
