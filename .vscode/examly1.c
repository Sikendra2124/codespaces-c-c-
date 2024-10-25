#include<stdio.h>
void main()
{
    char c;
    float t;
    printf("enter A to F for the result");
    scanf("%c",&c);
    switch(c)
    {
        case 'A':
            printf("hulled cereals and grains\n");
            printf("enter the price value:");
            scanf("%f",&t);
            printf("\nAfter GST deduction:%.2f",t);   
            break;
        case 'B':
            printf("cut-semi polished stone\n");
            printf("enter the price value:");
            scanf("%f",&t);
            printf("\nAfter GST deduction:%.2f",(t-(t*0.02)));   
            break;
        case 'C':
            printf("sugar,spices,edible oil\n");
            printf("enter the price value:");
            scanf("%f",&t);
            printf("\nAfter GST deduction:%.2f",(t-(t*0.05)));  
            break;
        case 'D':
            printf("electronic gadgets\n");
            printf("enter the price value:");
            scanf("%f",&t);
            printf("\nAfter GST deduction:%.2f",(t-(t*0.12)));  
            break;
        case 'E':
            printf("automobiles\n");
            printf("enter the price value:");
            scanf("%f",&t);
            printf("\nAfter GST deduction:%.2f",(t-(t*0.18)));  
            break;
        case 'F':
            printf("house hold appliances\n");
            printf("enter the price value:");
            scanf("%f",&t);
            printf("\nAfter GST deduction:%.2f",(t-(t*0.28)));  
            break;
        default:
            printf("invalid choice");
    }
}