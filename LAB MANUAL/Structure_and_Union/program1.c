#include <stdio.h>

union ByteExtractor {
    unsigned int num;  
    unsigned char bytes[4]; 
};

int main() {
    union ByteExtractor extractor;

    printf("Enter a hexadecimal value (unsigned int): ");
    scanf("%x", &extractor.num);

    printf("The individual bytes are:\n");
    for (int i = 0; i < 4; i++) {
        printf("Byte %d: 0x%02X\n", i, extractor.bytes[i]);
    }

    return 0;
}
