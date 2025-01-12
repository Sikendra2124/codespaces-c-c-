#include <stdio.h>

int main() {
    FILE *prime;
    int num, i, flag;

    prime = fopen("Prime.bat", "w");

    for (num = 2; num <= 100; num++) {
        flag = 1;  

        for (i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                flag = 0;  
                break;
            }
        }
        if (flag) {
            fprintf(prime, "%d\n", num);
        }
    }

    fclose(prime);

    return 0;
}
