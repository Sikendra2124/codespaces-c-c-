#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the value of a and b");
    scanf("%d%d",&a,&b);
    printf("enter 1 for addition\n enter 2 for subtraction\n enter 3 for multiplication\n enter 4 for division\n enter 5 for modulo division\n");
    scanf("%d",&c);
    switch(c)
    {
        case 1:
        printf("addition=%d",(a+b));
        break;
        case 2:
        printf("subtraction=%d",(a-b));
        break;
        case 3:
        printf("multiplication=%d",(a*b));
        break;
        case 4:
        printf("division=%d",(a/b));
        break;
        case 5:
        printf("modulo division=%d",(a%b));
        break;
        default:
        printf("wrong choice");
    }
    return 0;
}
