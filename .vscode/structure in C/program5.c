#include<stdio.h>
struct number
{
    int n[5];
};
void main()
{
    struct number arr;
    int i,j,temp;
    for(i=0;i<=4;i++){
        printf("enter a value");
        scanf("%d",&arr.n[i]);
    }
    printf("\nmy accepted values are:");
    for(i=0;i<=4;i++){
        printf("%d\t",arr.n[i]);
    }
//    for(i=0;i<=3;i++){
//     for(j=j+1;j<=4;j++){
//         if(arr.n[i]<arr.n[j]){
//             temp=arr.n[j];
//             arr.n[i]=arr.n[j];
//             arr.n[j]=temp;
//         }
//     }
//    }
   printf("after arranging:");
  for(i=0;i<=4;i++){
    printf("%d\t",arr.n[i]);
  }
}