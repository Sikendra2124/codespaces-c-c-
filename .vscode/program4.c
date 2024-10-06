#include<stdio.h>
int main()
{
    int len,b,base,height,radius,c;
    printf("enter 1 for rectangle\n enter 2 for triangle\n enter 3 for circle\n");
    scanf("%d",&c);
    switch (c)
    {
    case 1:
        printf("enter length and breadth");
        scanf("%d%d",&len,&b);
        printf("area of rectangle=%d",(len*b));
        break;
    case 2:
        printf("enter base and height");
        scanf("%d%d",&base,&height);
        printf("area of traiangle=%d",(1/2*base*height));
        break;
    case 3:
        printf("enter radius");
        scanf("%d",&radius);
        printf("area of circle=%d",(22/7*radius*radius));
        break;

    default:
        printf("wrong selection");
        break;
    }


}