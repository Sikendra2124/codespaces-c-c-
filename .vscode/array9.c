#include<stdio.h>
int main(){
    int i, n[5], m[5];
        for(i = 0; i < 5; i++){
        printf("Enter a value: ");
        scanf("%d", &n[i]);
    }

        for(i = 0; i < 5; i++){
        m[i] = n[4 - i];
    }
        printf("Our accepted values: ");

    for(i = 0; i < 5; i++){
        printf("%d\t", n[i]);
    }
        printf("\nAfter reversing, the elements are:\n");
        
    for(i = 0; i < 5; i++){
        printf("%d\t", m[i]);
    }
    
    return 0;
}
