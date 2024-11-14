#include<stdio.h>
int main(){
    int i,n[5],greatest,smallest;
    for(i=0;i<=4;i++){
        printf("enter a value:");
        scanf("%d",&n[i]);
    }
    printf("\naccepted element are:\n");
    for(i=0;i<=4;i++){
        printf("%d\t",n[i]);
    }
    greatest = n[0];
    smallest = n[0];
    for(i = 1; i < 5; i++) {
        if(n[i] > greatest) {
            greatest = n[i];
        }
        if(n[i] < smallest) {
            smallest = n[i];
        }
    }

    printf("\ngreatest elememt are=%d",greatest);
    printf("\nsmallest element are=%d",smallest);
    return 0;
}