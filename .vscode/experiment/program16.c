#include<stdio.h>
int main(){
    int income;
    float tax=0;
    printf("enter annual income:\t");
    scanf("%d",&income);
    if(income<=100000){
        tax=0;
    }else if(income>100000 && income<=150000){
        tax=0.10*(income-100000);
    }else if(income>150000 && income<=250000){
        tax=5000+0.20*(income-150000);
    }else{
        tax=25000+0,0.30*(income-250000);
    }
    printf("the calculated tax is:%.2f\n",tax);
    return 0;
}
