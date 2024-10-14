#include <stdio.h>

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    printf("Reversed number: ");
    do {
        printf("%d", num % 10);  
        num /= 10;               
    } while (num != 0);         
    printf("\n");
    return 0;
}
