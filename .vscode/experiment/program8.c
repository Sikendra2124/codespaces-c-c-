
// //using third variable

// #include<stdio.h>
// int main(){
//     int a,b,temp;
//     printf("enter the value of a:\t");
//     scanf("%d",&a);
//     printf("enter the value of b:\t");
//     scanf("%d",&b);
//     printf("before swapping a=%d b=%d\n",a,b);
//     temp=a;
//     a=b;
//     b=temp;
//     printf("after swapping a=%d b=%d",a,b);
//     return 0;
// }


//without using third variable

// #include<stdio.h>
// int main(){
//     int a,b;
//     printf("enter value of a and b\t");
//     scanf("%d%d",&a,&b);
//     printf("before swapping a=%d b=%d\n",a,b);
//     a=a+b;
//     b=a-b;
//     a=a-b;
//     printf("after swapping a=%d b=%d",a,b);
//     return 0;
// }


//within single statement using comma operator
#include<stdio.h>
int main(){
    int a,b;
    printf("enter value of a and b\t");
    scanf("%d%d",&a,&b);
    printf("before swapping a=%d b=%d\n",a,b);
    a=(b+(b=a),a);
    printf("after swapping a=%d b=%d",a,b);
}