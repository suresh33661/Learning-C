#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    char s[] = "abccb: ,z";
    int n = strlen(s);
    char* arr = (char*)malloc(n * sizeof(char));
    int j = 0;
    for (int i = 0 ; s[i] != '\0'; i++){
        if(s[i] != ':' && s[i] != ' ' && s[i] != ',' && !isspace(s[i])){
            arr[j++] = s[i];
        }
    }
    arr[j] = '\0';

    for (int i = 0; i<j/2; i++){
        if(arr[i] != arr[j-i-1]){
            printf(" false");
            free(arr);
            return 0;
        }
    }
    printf(" true\n");
    free(arr);
    return 0;
}