#include<stdio.h>
int main(){
    int i,j,sp;
    for(i=1;i<=4;i++){
        for(j=1;j<=4-i;j++){
            printf(" ");
        }
        for(int k=1;k<=i;k++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}