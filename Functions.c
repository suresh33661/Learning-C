#include <stdio.h>

int  sum(int a , int b){
    int result ;
    result = a + b;
}

int main(){
    int x = 10 , y = 20;
    sum(x,y);
    printf("The sum of %d and %d is %d", x, y , sum(x,y) );
}