#include<stdio.h>
int main(){
    int i,n[5],sum=0,avg;
    for(i=0;i<=4;i++){
        printf("enter a value:");
        scanf("%d",&n[i]);
    }
    printf("array values are:\n");
    for(i=0;i<=4;i++){
        printf("%d\t",n[i]);
        sum=sum+n[i];
    }
    avg=sum/i;
    printf("\nsum of array are:%d\n",sum);
    printf("average of array are:%d",avg);
}