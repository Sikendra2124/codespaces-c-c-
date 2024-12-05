#include<stdio.h>
struct number
{
    int n[5];
};

void main(){
    struct number m;
    int i,s=0;
    float avg;
    for(i=1;i<=5;i++){
        printf("enter a value:");
        scanf("%d",&m.n[i-1]);
    }
    printf("\n now accessing array values from structure");
    for(i=0;i<=4;i++){
        printf("%d\t",m.n[i]);
        s=s+m.n[i];
    }
    avg=s/i;
    printf("\n sum of array element:%d",s);
    printf("\naverage of array elements are:%f",avg);

}
