#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isvowel(char c){
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}


void reversevowel(char* str){
    int left = 0;
    int right = strlen(str) - 1;
    while (left < right){
        while (left < right && !isvowel(str[left])){
            left ++;
        }
        while (left < right && !isvowel(str[right])){
            right --;
        }

        if (left < right){
            char temp = str[left];
            str[left] = str[right];
            str[right] = temp;
        }
    }
}



int main() {
    char str[] = "hello";
    reversevowel(str);
    printf("Reversed vowels: %s\n", str);
    return 0;
}