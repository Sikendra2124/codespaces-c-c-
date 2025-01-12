#include <stdio.h>

int Divisorssum(int num) {
    int sum = 0;

    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {  
            sum += i;        
        }
    }

    return sum;
}

int Amicable(int num1, int num2) {
    return (Divisorssum(num1) == num2 && Divisorssum(num2) == num1);
}

int main() {
    int num1, num2;

    printf("Enter two numbers to check if they are amicable: ");
    scanf("%d %d", &num1, &num2);

    if (Amicable(num1, num2)) {
        printf("%d and %d are amicable numbers.\n", num1, num2);
    } else {
        printf("%d and %d are not amicable numbers.\n", num1, num2);
    }

    return 0;
}
