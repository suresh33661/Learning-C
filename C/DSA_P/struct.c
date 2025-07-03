#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr = NULL;
    int size;

    size++;
    arr = realloc(arr, size * sizeof(int));
        arr[size -1 ] = 10;

    

    for (int i = 0; i < size; i++) {
        printf("%d", arr[i]);
    }


    free(arr);
    return 0;
}