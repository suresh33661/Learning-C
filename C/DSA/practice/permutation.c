#include <stdio.h>

int main(){
    char s1[] = "abc";
    char s2[] = "eidcbao";
    int len1 = sizeof(s1); 
    int len2 = sizeof(s2); 
    char aplha[26] = {0};
    for (int i = 0; s1[i] != '\0'; i++){
        if (s1[i] >= 'a' && s1[i] <= 'z'){
            aplha[s1[i] - 'a'] ++;

        }
        
    }
    for (int i = 0; s2[i] != '\0'; i++){
        if (s2[i] >= 'a' && s2[i] <= 'z'){
            aplha[s2[i] - 'a'] --;
        }
    }
    
    for (int i = 0; i<26; i++){
        printf("%d" , aplha[i]);
    }
}