#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_WORDS 100
#define MAX_LENGTH 26
void stringsort(char* strs[]){
int len = sizeof(strs) / sizeof(strs[0]);
for(int i = 0; i<len-1; i++){
    for (int j = i+1; j<len; j++){
        if(strcmp(strs[i] , strs[j]) > 0){
          char*  temp = strs[i];
            strs[i] = strs[j];
            strs[j] = temp;
        }
    }
}

for(int i = 0; i<len; i++){
    printf("%s ", strs[i]);
}

}

typedef struct{
    char key[MAX_LENGTH];
    char words[MAX_WORDS][MAX_LENGTH];
    int count;
} AnagramGroup;


