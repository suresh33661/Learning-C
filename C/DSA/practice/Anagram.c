#include <stdio.h>

int main(){
    char s[] = "cart";
    char t[] = "arc";
    if(sizeof(s) != sizeof(t)){
        printf("Not an anagram\n");
    }
    int count[26] = {0};
    for(int i = 0; i < sizeof(s); i++){
        if(s[i] >= 'a' && s[i] <= 'z'){
            count[s[i] - 'a']++;
        }
    }

    for (int i=0; i < sizeof(t); i++){
        if (t[i] >= 'a' && t[i] <= 'z'){
            count[t[i] - 'a']--;
        }
    }

    for(int i = 0; i< sizeof(count)/sizeof(count[0]); i++){
        if(count[i] != 0){
            printf("Not an anagram\n");
            return 0;
        }
    }
    printf("Anagram\n");
}