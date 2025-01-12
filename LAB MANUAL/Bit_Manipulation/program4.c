#include <stdio.h>

int main() {
    int A, B;
    printf("Enter two numbers (A and B): ");
    scanf("%d %d", &A, &B);

    int XOR = A ^ B; 
    int count = 0;

    while (XOR > 0) {
        count += XOR & 1; 
        XOR >>= 1;        
    }

    printf("Number of bits to be flipped to convert %d to %d: %d\n", A, B, count);

    return 0;
}
