#include <stdio.h>

int main() {
    int n, max=0, res=0;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    res = max = arr[0];

    for (int i = 1; i <= n-1; i++)
    {
        max = (max+arr[i] > arr[i]) ? max+arr[i] : arr[i] ;
        res = (res>max) ? res : max;
    }

    
    printf("The largest sum of the contiguous subarray is: %d\n", res);

    return 0;
}
