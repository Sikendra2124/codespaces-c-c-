#include <stdio.h>
void decimal_to_binary(int n) {
    if (n == 0) {
        return;
    }
    decimal_to_binary(n / 2);
    printf("%d", n % 2);
}

int main() {
    int decimal_number;
    printf("Enter a decimal number: ");
    scanf("%d", &decimal_number);
    if (decimal_number == 0) {
        printf("Binary representation of 0 is 0\n");
    } else {
        printf("Binary representation of %d is ", decimal_number);
        decimal_to_binary(decimal_number);
        printf("\n");
    }
    return 0;
}
