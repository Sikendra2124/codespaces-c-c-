#include<stdio.h>
int main()
{
    float math, phy, che;
    printf("enter marks for math");
    scanf("%f",&math);
    printf("enter marks for phy");
    scanf("%f",&phy);
    printf("enter marks for che");
    scanf("%f",&che);
    if(math>=65 || phy>=55 || che>=50){
        if(math+phy>=140){
            printf("you can take admission in professional course");
        }
    }else{
        printf("you are not eligible to take admission in professional course");
    }
    return 0;
}