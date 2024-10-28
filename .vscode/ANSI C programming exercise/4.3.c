#include <stdio.h>

int main() {
    int number, divisor = 1;

    // Get the user's input
    printf("Enter a number: ");
    scanf("%d", &number);

    // Calculate the initial divisor based on the number of digits
    while (number / divisor >= 10) {
        divisor *= 10;
    }

    // Loop to display the number, removing one digit from the left each time
    while (divisor > 0) {
        printf("%d\n", number);  // Print the current number
        number %= divisor;       // Remove the left-most digit
        divisor /= 10;           // Reduce the divisor by a factor of 10
    }

    return 0;
}
