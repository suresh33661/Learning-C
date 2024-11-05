// Coniguos memory allocation
// used to allocated memory multiple blocks of memory.
// Each block is of same size.
// Initally all blocks filled with garbage value. like Zeros.

#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, n, *ptr;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    ptr = (int *) calloc (n,sizeof(int));
    
    
        printf("Memory allocated successfully\n");
        for (i = 0; i<n; i++){
            printf("%d\n", *(ptr + i));
        }
    
}