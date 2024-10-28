#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,root,discriminant,root1,root2;
    printf("input the value a,b,c");
    scanf("%f %f %f",&a,&b,&c);
    discriminant=b*b-4*a*c;
    if(discriminant<0){
        printf("\nroots are imaginary\n");
    } else {
        root1= (-b + sqrt(discriminant))/(2.0*a);
        root2= (-b - sqrt(discriminant))/(2.0*a);
        printf("\n\nRoot1=%5.2f\n\n Root2=%5.2f\n",root1,root2);
    }
    return 0;
}