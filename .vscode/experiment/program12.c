#include<stdio.h>

int main() {
    double num1, num2, result;
    char operator;

    printf("Enter first number: ");
    scanf("%lf", &num1);

    printf("Enter second number: ");
    scanf("%lf", &num2);

    printf("Enter an arithmetic operator (+, -, *, /): ");
    scanf(" %c", &operator);  // Notice the space before %c

    result = (operator == '+' ? (num1 + num2) :
              operator == '-' ? (num1 - num2) :
              operator == '*' ? (num1 * num2) :
              operator == '/' ? (num2 != 0 ? num1 / num2 : 0) : 0);

    if (operator == '/' && num2 == 0) {
        printf("ERROR: Division by zero\n");
    } else {
        printf("Result = %lf\n", result);
    }

    return 0;
}
