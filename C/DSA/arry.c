#include <stdio.h>
#include <stdlib.h>

int main() {
    int size;

    printf("Enter size");
    scanf("%d", &size);

    int *arr = malloc(size * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1; 
    }

    for (int i =0 ; i < size; i++) {
        printf("Enter element %d: ", i+ 1);
        scanf("%d", &arr[i]);

    }
    for (int i = 0; i<size; i++){
        printf("%d", arr[i]);
    }
}