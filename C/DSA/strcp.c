#include <stdio.h>
#include <string.h>

int main(){
    char s[20] = "Hello";
    char s1[10];
    strcpy(s1, s);
    printf("%s", s1);
}