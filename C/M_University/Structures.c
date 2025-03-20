#include <stdio.h>


struct date {
    unsigned int d;
    unsigned int m;
    int a;
};
struct date today;

int main(void){
    today.d = 10;
    today.m = 10;
    
    printf("Today's date is %d/%d\n"
, today.d, today.m);
printf("Size of today is %lu bytes\n", sizeof(today));
    return 0;
}



