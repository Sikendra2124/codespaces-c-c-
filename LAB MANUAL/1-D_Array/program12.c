#include <stdio.h>

int main() {
    int n, val;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int num[n];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &num[i]);
    }

    printf("Enter the target value: ");
    scanf("%d", &val);

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (num[i] + num[j] == val) {
                printf("Indices: [%d, %d]\n", i, j);
                return 0; 
            }
        }
    }

    printf("No solution found.\n");

    return 0;
}
