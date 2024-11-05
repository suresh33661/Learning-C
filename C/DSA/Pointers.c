#include <stdio.h>

int main(){
    int a= 1025;
    int *p;
    p = &a;
    printf("size of integer is %d bytes\n",sizeof(int));
    printf("%d\n", p);
    int *b;
    b = p;
    printf("%d\n", b);

    char *c;
    c = (char*)p; // typecasting a char pointer to an integer pointer
    printf("%d\n", c);
    printf("type of c is %d\n", sizeof(char));
}