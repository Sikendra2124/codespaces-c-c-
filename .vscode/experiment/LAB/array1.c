#include<stdio.h>
int main(){
    int arr[5][5];
    printf("enter an element\n");
    for(int i=1;i<5;i++){
        for(int j=1;j<5;j++){
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }

printf("accepted elements are:\n");
for(int i=1;i<5;i++){
    for(int j=1;j<5;j++){
        printf("%d\t\t",arr[i][j]);
    }
    printf("\n");
}
return 0;
}