#include <stdio.h>
#include <stdlib.h>

int main(){
    int nums[] = {-1,1,0,-3,3};
    int post = 1;
    int len = sizeof(nums)/sizeof(nums[0]);
    int* arr = (int*)malloc(len* sizeof(int));
    for (int i = 0; i< len; i++){
        arr[i] = 1;
    }

    for (int i = 0; i<len; i++){
        arr[i+1] = nums[i] * arr[i];
    }

    for (int i = len-1; i>=0; i--){
        arr[i] = post * arr[i];
        post *= nums[i];
    }
    for (int i = 0; i<len; i++){
        printf("%d ", arr[i]);
    }
}