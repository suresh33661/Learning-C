// #include <stdio.h>
// int main(){
//     int *p;
//     int a = 10;
//     p = &a;
//     printf("%p\n" , *p);
//     printf("%p" , a);
// }
#include <stdio.h>
int main(){
    int *p;
    int a[4] = {1,2,3,4};
    p = a;
    printf("%p\n" , *p);
    printf("%p" , a);
}