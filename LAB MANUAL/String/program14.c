#include <stdio.h>
#include <string.h>

int Substring(char str[]) {
    int n = strlen(str);
    int maxLength = 0; 
    int start = 0;     
    int freq[256] = {0}; 

    for (int end = 0; end < n; end++) {
        freq[(int)str[end]]++;

        while (freq[(int)str[end]] > 1) {
            freq[(int)str[start]]--;
            start++;
        }

        int currentLength = end - start + 1;
        if (currentLength > maxLength) {
            maxLength = currentLength;
        }
    }
    return maxLength;
}

int main() {
    char str[100];

    printf("Enter the string: ");
    scanf("%s", str);

    int length = Substring(str);
    printf("Length of the longest substring without repeating characters: %d\n", length);

    return 0;
}
