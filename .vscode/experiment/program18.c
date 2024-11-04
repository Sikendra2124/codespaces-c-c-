#include<stdio.h>
int main(){
    int currency;
    printf("enter currency:");
    scanf("%d",&currency);
    int five_hundred=currency/500;
    int two_hundred=(currency/500)/200;
    // int one_hundred=two_hundred/100;
    // int fifty=one_hundred/50;
    // int twenty=fifty/20;
    // int ten=twenty/10;
    // int five=ten/5;
    // int two=five/2;
    // int one=two/1;

    printf("total 500=%d\t",five_hundred);
    printf("total 200=%d\t",two_hundred);
    // printf("total 100=%d\t",one_hundred);
    // printf("total 50=%d\t",fifty);
    // printf("total 20=%d\t",twenty);
    // printf("total 10=%d\t",ten);
    // printf("total 5=%d\t",five);
    // printf("total 2=%d\t",two);
    // printf("total 1=%d\t",one);
return 0;
}