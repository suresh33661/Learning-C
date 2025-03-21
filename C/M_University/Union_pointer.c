#include <stdio.h>

typedef union {
    unsigned long reg;
    struct {
        unsigned int a: 8;
        unsigned int b: 8;
        unsigned int c: 8;
        unsigned int d: 8;
    };

}LEd_rotate;


union{
    
    char a;
    long int b;
    double c;


} u1;
int main(void){
    
    printf("The size of union is %lu bytes\n", sizeof(u1));
    return 0;
}