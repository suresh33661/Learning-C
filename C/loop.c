#include <stdio.h>

int main(){
    int a[]  = {1,2,3,4};
    int i ;
    for (i = 0; i<sizeof(a)/4;i++){
    printf("%d", a[i]);
    }
}