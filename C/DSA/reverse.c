#include <stdio.h>

int main(){
    char arr[] = "hello";
    int left = 0;
    int right = sizeof(arr) / sizeof(arr[0]) ;
    while(left < right ){
        char temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
        left++;
        right--;



    }
    printf("Reversed string: %s\n", arr);
}