#include <stdio.h>
#include <stdlib.h>

int main(){
    int nums[]  = {1,1,1,2,2,3};
    int k = 2;
    int n = sizeof(nums) / sizeof(nums[0]);
    int count = 0;
    int index = 0;
    int* arr = (int *)malloc(n* sizeof(int));

    for(int i = 0; i < n; i++){
        count = 0;
        for (int j = 0 ; j < n; j++){
            if (nums[i] == nums[j]){
                count++;
                if(count == k){
                    arr[++index] = nums[i];
                    break;
                }
            }
        }
        
    }
    for(int i = 1; i <= index; i++){
        printf("%d ", arr[i]);
    }
}