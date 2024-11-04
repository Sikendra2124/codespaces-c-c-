#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter values for a,b,c");
    scanf("%d%d%d",&a,&b,&c);
    printf("greatest number=%d",(a>b)?((a>c)?a:c):(b>c)?b:c);
}