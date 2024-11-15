#include <stdio.h>

int main() {
    int i, j, t, c, n[5];
    
    // Input the array elements
    for(i = 0; i <= 4; i++) {
        printf("Enter a value: ");
        scanf("%d", &n[i]);
    }
    
    // Sort the array in ascending order
    for(i = 0; i <= 4; i++) {
        for(j = i + 1; j <= 4; j++) {
            if(n[i] > n[j]) {
                t = n[i];
                n[i] = n[j];
                n[j] = t;
            }
        }
    }
    
    // Print and count duplicates
    printf("\nDuplicate counts:\n");
    for(i = 0; i <= 4;) {
        c = 1;  // Start counting occurrences
        for(j = i + 1; j <= 4; j++) {
            if(n[i] == n[j]) {
                c++;
            } else {
                break;  // Exit inner loop if a different element is found
            }
        }
        
        if(c > 1) {
            printf("%d is repeated %d times\n", n[i], c);
        }
        
        i = j;  // Move to the next unique element
    }
    
    return 0;
}
