#include <stdio.h>
#include <stdlib.h>

int main(){
    int arr[] = {1,8,6,2,5,4,8,3,7};
    int len = sizeof(arr) / sizeof(arr[0]);
    int left = 0;
    int right = len - 1;
    int max_area = 0;
    while (left < right){
       int  width  = right - left;
        int area = (arr[left] < arr[right] ? arr[left] : arr[right]) * width;
        max_area = area > max_area ? area : max_area;
        if (arr[left ] < arr[right]){
            left ++;}
        else {
            right --;
        }
        }
    printf("Max area: %d\n", max_area);
    return 0;
    }

