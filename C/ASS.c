#include <stdio.h>

 memclr(char *data, int N) {
    for (; N > 0; N--) {
        *data = 0;    // Set the current byte to 0
        data++;       // Move to the next byte
    }
}

int main() {
    char data[] = "Hello, World!";
    printf("Before memclr: %s\n", data);  // Output original data
    
    memclr(data, 5);                      // Clear the first 5 characters
    
    printf("After memclr: %s\n", data);   // Output modified data
    return 0;
}
