#include <stdio.h>
int main(){
    int num = 3211;
    int n = 0;
    while(num != 0){
        n++;
        num /= 10;
    }
    printf("%d",n);
}