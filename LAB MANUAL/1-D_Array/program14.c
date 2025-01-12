#include <stdio.h>

int main() {
    int n;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < n - 1; i += 2) {
        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
    }

    printf("Array in wave form:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int chocolateDistribution(int arr[], int n, int m) {
    if (m == 0 || n == 0) {
        return 0;
    }

    if (m > n) {
        printf("Number of students is greater than number of packets.\n");
        return -1;
    }

    qsort(arr, n, sizeof(int), compare);

    int minDiff = __INT_MAX__;

    for (int i = 0; i + m - 1 < n; i++) {
        int diff = arr[i + m - 1] - arr[i];
        if (diff < minDiff) {
            minDiff = diff;
        }
    }

    return minDiff;
}

int main() {
    int n, m;

    printf("Enter the number of packets (size of array): ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the number of chocolates in each packet:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number of students: ");
    scanf("%d", &m);

    int result = chocolateDistribution(arr, n, m);
    if (result != -1) {
        printf("The minimum difference is %d\n", result);
    }

    return 0;
}
