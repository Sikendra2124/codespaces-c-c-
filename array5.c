#include<stdio.h>
void main(){
    int i,n[5],sum=0;
    float avg;
    for(i=0;i<=4;i++){
        printf("enter a value:");
        scanf("%d",&n[i]);
    }
    printf("\narray elements are:\n");
    for(i=0;i<=4;i++){
        printf("%d\t",n[i]);
        sum=sum+n[i];
    }
    avg=sum/i;
    printf("\n sum of array elements=%d",sum);
    printf("\n average of array elements=%f",avg);
}