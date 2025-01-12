#include <stdio.h>

int main() {
    int n, a, x, b, y; 

    printf("Enter the values of a, x, and b: ");
    scanf("%d %d %d", &a, &x, &b);
    printf("Enter the value of n (1, 2, 3, or 4): ");
    scanf("%d", &n);

    if (n == 1) {
        y = (a * x) % b; 
    } 
    
    else if (n == 2) {
        y = (a * x * x) + (b * b);
    } 
    
    else if (n == 3) {
        y = a - (b * x); 
    } 
    
    else if (n == 4) {
        y = a + (x * b); 
    } 
    
    else {
        printf("Please enter 1, 2, 3, or 4.\n");
        return 1; 
    }

    printf("The value of y is: %d\n", y);

    return 0;
}
