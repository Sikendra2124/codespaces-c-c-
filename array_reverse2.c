#include <stdio.h>

int main() {
    int arr[5], i;

    // Input 5 elements into the array
    printf("Enter 5 elements:\n");
    for (i = 0; i < 5; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Display the array before reversal
    printf("\nOriginal array: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    // Reverse the array
    printf("\nReversed array: ");
    for (i = 4; i >= 0; i--) {
        printf("%d ", arr[i]);
    }

    return 0;
}
