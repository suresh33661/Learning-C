#include <stdio.h>
#include <stdlib.h>
int main(){
    int height[] = {0,1,0,2,1,0,1,3,2,1,2,1};
    int len = sizeof(height) / sizeof(height[0]);
    int* left = (int*) malloc(len * sizeof(int));
    int* right = (int*)malloc(len * sizeof(int));

    for (int i = 0; i<len; i++){
        left[i] = 0;
        right[i] = 0;
    }

    left[0] = height[0];
    for ( int i = 1; i<len; i++){
        left[i] = height[i] > left[i-1] ? height[i] : left[i-1];    }

    right[len-1] = height[len-1];
    for(int i = len-2; i>=0; i--){
        right[i] = height[i] < right[i+1] ? right[i+1] : height[i];
    }
    int water = 0;
    for (int i = 0; i<len; i++){
        water += (left[i] < right[i] ? left[i] : right[i]) - height[i];
        

    }
    printf("total water trapped: %d\n",water);
    free(left);
    free(right);
    return 0;
    
}