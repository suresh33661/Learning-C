#include <stdio.h>

struct embedded {
    int a;
    char b;
};

struct embedded es1, es2;

int main(){
    es1.a = 1;
    es1.b = 'a';
    printf("%d %c\n", es1.a, es1.b);	
}
// Struct in C is a user-defined data type that allows you to store 
//multiple items of different data types.
// The struct keyword is used to define a structure or struct in C.