#include<stdio.h>
int main(){
    int calls;
    float rupees;
    printf("enter number of calls:");
    scanf("%d",&calls);
    if(calls<=50){
        rupees=100;
    }else if(calls<=100 && calls>50){
        rupees=100+0.80*(calls-50);
    }else if(calls<=200 && calls>100){
        rupees=100+(50*0.80)+0.60*(calls-100);
    }else{
        rupees=100+(50*0.80)+(100*0.60)+(calls-200);
    }
    printf("your telephonic bills in rs=%f",rupees);
    return 0;
}