#include <stdio.h>

int main(){
    int arr[] = {2,7,11,15};
    int target = 9;
    int len = sizeof(arr) / sizeof(arr[0]);

    int left = 0;
    int right = len -1;
    while(left <= right){
        int sum = arr[left] + arr[right];
        if(sum == target){
            printf("%d %d\n", left , right);
            return 0;
        }
        else if(sum < target){
            left++;
        }
        else {
            right--;
        }
    }
}