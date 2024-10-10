#include <stdio.h>

int main() {
    int num, factorial = 1, i = 1;
    printf("Enter a positive number: ");
    scanf("%d", &num);
    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        while (i <= num) {
            factorial *= i;  
            i++;             
        }
        printf("The factorial of %d is: %d\n", num, factorial);
    }

    return 0;
}
