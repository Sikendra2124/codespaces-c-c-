#include<stdio.h>
void inp(int arr[], int size){
    printf("enter %d size of array:",size);
    for(int i=0;i<size;i++){
        printf("element %d:",i+1);
        scanf("%d",&arr[i]);
    }
}

float calcavg(int arr[], int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=arr[i];
    }
    return (float)sum/size;
}

void highlow(int arr[], int size, int *highest, int *lowest){
    *highest=arr[0];
    *lowest=arr[0];
    for(int i=1;i<size;i++){
        if(arr[i]>*highest){
            *highest=arr[i];
        }
        if(arr[i]<*lowest){
            *lowest=arr[i];
        }
    }
}

int main(){
    int size;
    printf("enter the size of the array");
    scanf("%d",&size);
    int arr[size];
    inp(arr,size);
    float average=calcavg(arr,size);
    int highest,lowest;
    highlow(arr,size,&highest,&lowest);
    printf("\n average of the array elements:%.2f\n",average);
    printf("highest value in the array:%d\n",highest);
    printf("lowest value in the array:%d\n",lowest);
    return 0;
}