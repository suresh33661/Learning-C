#include <stdio.h>



/*int main(){
    es1.a = 1;
    es1.b = 'a';
    printf("%d %c\n", es1.a, es1.b);	
}*/
// Struct in C is a user-defined data type that allows you to store 
//multiple items of different data types.
// The struct keyword is used to define a structure or struct in C.


struct {
    uint8_t day: 5;
    uint8_t week: 3;
} month;

int main(){
    printf("size of month %lu in bytes\n", sizeof(month));
    return 0;
}
