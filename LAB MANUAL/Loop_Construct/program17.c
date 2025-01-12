#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of rows for the arrow (odd number): ");
    scanf("%d", &n);

    if (n % 2 == 0) {
        printf("Please enter an odd number.\n");
        return 1;
    }

    int mid = (n / 2) + 1; // Middle row index

    for (int i = 1; i <= mid; i++) {
        for (int j = 1; j < i; j++) {
            printf("  ");
        }
        for (int j = i; j <= mid; j++) {
            printf("*");
        }
        printf("\n");
    }

    for (int i = mid - 1; i >= 1; i--) {
        for (int j = 1; j < i; j++) {
            printf("  ");
        }
        for (int j = i; j <= mid; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
