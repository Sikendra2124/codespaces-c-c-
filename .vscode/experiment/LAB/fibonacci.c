#include<stdio.h>
int fibonacci(int num, int i){
if(num==1){
    return 1;
}

if(num>1){
    return(num+fibonacci(num-1,i+1));
}
return 0;
}

int main(){
    int num,sum;
    printf("enter the value of num:");
    scanf("%d",&num);
    sum=fibonacci(num,1);
    printf("sum of fibonacci till %d is: %d",num,sum);
}