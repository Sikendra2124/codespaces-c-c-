#include <stdio.h>
#include <string.h>

const char *keypad[] = {
    "",     
    "",     
    "abc",  
    "def",  
    "ghi",  
    "jkl",  
    "mno",  
    "pqrs", 
    "tuv",  
    "wxyz"  
};

void generateCombinations(char *digits, char *current, int index, int length) {
    if (index == length) {
        current[index] = '\0'; 
        printf("%s\n", current);
        return;
    }

    int digit = digits[index] - '0';
    const char *letters = keypad[digit];

    if (*letters == '\0') {
        generateCombinations(digits, current, index + 1, length);
        return;
    }

    for (int i = 0; letters[i] != '\0'; i++) {
        current[index] = letters[i]; 
        generateCombinations(digits, current, index + 1, length);
    }
}

int main() {
    char digits[100];
    printf("Enter the digits (2-9): ");
    scanf("%s", digits);

    int length = strlen(digits);

    if (length == 0) {
        printf("[]\n");
        return 0;
    }

    char current[100]; 
    printf("Possible letter combinations are:\n");
    generateCombinations(digits, current, 0, length);

    return 0;
}
