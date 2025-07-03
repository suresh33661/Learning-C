#include <stdio.h>

void string(char* s, int size){
    printf("charcters :\n");
    for (int i =0; i < size; i++) {
        printf("%c", s[i]);
        printf("\n");
    }
}

int main() {
    char name[] = "Suresh";
    int length = sizeof(name) - 1;
    string(name, length);
}