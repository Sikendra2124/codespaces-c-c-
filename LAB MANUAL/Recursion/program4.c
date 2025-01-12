#include <stdio.h>

double sumOfSeries(int n, int i) {
    if (i > n) {
        return 0;
    }
    
    double num = (i % 2 == 1) ? 1.0 / i : -1.0 / i;
    
    return num + sumOfSeries(n, i + 1); 
}

int main() {
    int n;

    printf("Enter a positive integer N: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    double result = sumOfSeries(n, 1);
    
    printf("The sum of the series is: %.15f\n", result);

    return 0;
}
