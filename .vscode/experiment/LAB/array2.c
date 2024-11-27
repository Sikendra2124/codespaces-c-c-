#include<stdio.h>
int main(){
    int i,j,a[3][3],b[3][3],sum[3][3];

    printf("enter elements for array A\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }

    printf("enter elements for array B\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }

    printf("sum of array A and array B\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            sum[i][j]=a[i][j]+b[i][j];
            printf("%d\t",a[i][j]);
            // printf("%d\t",b[i][j]);
            // printf("%d\t",sum[i][j]);
        }
        printf("\n");
    }

        printf("sum of array A and array B\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            sum[i][j]=a[i][j]+b[i][j];
            // printf("%d\t",a[i][j]);
            printf("%d\t",b[i][j]);
            // printf("%d\t",sum[i][j]);
        }
        printf("\n");
    }

        printf("sum of array A and array B\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            sum[i][j]=a[i][j]+b[i][j];
            // printf("%d\t",a[i][j]);
            // printf("%d\t",b[i][j]);
            printf("%d\t",sum[i][j]);
        }
        printf("\n");
    }

return 0;
}


