
#include <stdio.h>
#include <stdlib.h>

int main(){
    int a[] = {100,4,200,1,3,2};
    int n = sizeof(a) / sizeof(a[0]);

    // Sort array
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    // Allocate result array
    int* arr = (int*)malloc(n * sizeof(int));
    int index = 0;

    // Copy unique elements
    arr[index++] = a[0];  // first element is always included
    for (int i = 1; i < n; i++) {
        if (a[i] != a[i - 1]) {
            arr[index++] = a[i];
        }
    }

    printf("The sorted unique array is: ");
    for (int i = 0; i < index; i++) {
        printf("%d ", arr[i]);
    }

    

    int longest = 1;
    int current = 1;
    for (int i = 1; i<index; i++){
        if(arr[i] - arr[i-1] == 1){
            current ++;
            if(longest < current){
                longest = current;
            }
        }
        else {
            current = 1;
        }
    }
    printf("\nThe longest consecutive sequence is: %d\n", longest);
    free(arr);
    return 0;
}
