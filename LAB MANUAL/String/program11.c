#include <stdio.h>
#include <string.h>

void swap(char *x, char *y) {
    char temp = *x;
    *x = *y;
    *y = temp;
}

void generate(char str[], int start, int end) {
    if (start == end) {
        printf("%s\n", str); 
    } 
    else {
        for (int i = start; i <= end; i++) {
            swap(&str[start], &str[i]);           
            generate(str, start + 1, end); 
            swap(&str[start], &str[i]);           
        }
    }
}

int main() {
    char str[100];

    printf("Enter the string: ");
    scanf("%s", str);

    int n = strlen(str);

    printf("Permutations of the string are:\n");
    generate(str, 0, n - 1);

    return 0;
}
