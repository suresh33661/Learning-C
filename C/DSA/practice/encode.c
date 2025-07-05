#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char* s[] = {"abc","ab","xy","ab"};
    int count = sizeof(s) /sizeof(s[0]);

    int total_length = 0;
    for(int i =0 ; i<count ; i++){
        total_length += strlen(s[i]);
        //printf("%d", total_length);
        if(i<count-1) total_length += 1;
    }
    //printf("%d", total_length);

    char* joined = (char*)malloc(total_length + 1);
    joined[0] = '\0';
    
    for (int i = 0; i<count; i++){
        strcat(joined,s[i]);
        if(i<count - 1) strcat(joined, "#");
    }
    printf("%s", joined);

    char* cleaned = (char*)malloc(strlen(joined)+1);
    int index = 0;
    for (int i = 0; i < strlen(joined); i++) {
        if (joined[i] != '#') {
            cleaned[index++] = joined[i];
        }
    }
    cleaned[index] = '\0'; // Null-terminate the cleaned string
    printf("\n%s", cleaned);
}