#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    double discriminant, root1, root2, realPart, imaginaryPart;

    // Input coefficients
    printf("Enter coefficients a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    // Calculate the discriminant
    discriminant = b * b - 4 * a * c;

    // Check the nature of the discriminant
    if (discriminant > 0) {
        // Two real and distinct roots
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Root1 = %.2lf\n", root1);
        printf("Root2 = %.2lf\n", root2);
    }
    else if (discriminant == 0) {
        // One real and repeated root
        root1 = -b / (2 * a);
        printf("Root1 = Root2 = %.2lf\n", root1);
    }
    else {
        // Complex roots
        realPart = -b / (2 * a);
        imaginaryPart = sqrt(-discriminant) / (2 * a);
        printf("Root1 = %.2lf + %.2lfi\n", realPart, imaginaryPart);
        printf("Root2 = %.2lf - %.2lfi\n", realPart, imaginaryPart);
    }

    return 0;
}
