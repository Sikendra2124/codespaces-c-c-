#include<stdio.h>
void table(int n, int i){
    if(i>10)
    return;
    printf("%d * %d = %d\n",n,i,n*i);
    table(n,i+1);
}

int main(){
    int n;
    printf("enter the value for table:");
    scanf("%d",&n);
    table(n,1);
    return 0;
}