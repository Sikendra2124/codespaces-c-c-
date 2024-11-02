#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,discriminant,root1,root2;
    printf("enter values of a,b,c");
    scanf("%f%f%f",&a,&b,&c);
    discriminant=b*b-4*a*c;
    if(discriminant<0){
        printf("\n\nRoots are Imaginary\n\n");
    }else{
        root1=(-b+sqrt(discriminant))/(2.0*a);
        root2=(-b-sqrt(discriminant))/(2.0*a);
        printf("root1=%5.2f\n\n root2=%5.2f\n\n",root1,root2);
    }
}