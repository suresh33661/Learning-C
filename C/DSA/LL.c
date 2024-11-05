#include <stdio.h>

int main(){
    int a = 10;
    int *p =  &a;
    char b = 'a';
    char *c = &b;
    printf("%d\n", *p);
}