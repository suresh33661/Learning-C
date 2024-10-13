#include <stdio.h>
//#include <iostream>
#define max 100
int main(){
   int a[5] = {1,2,3,4,5};
   int b[5] = {1,2,3,4,5};
   int c[5];
   for (int i = 0; i<5; i++)
    c[i] = a[i] + b[i];
    printf("Sum of the arrays\n");
   
   for (int i = 0; i<5; i++){
    printf("%d\n",c[i]);
   }
    
}