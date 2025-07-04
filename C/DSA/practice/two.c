#include <stdio.h>

int main(){
    int nums[] = {1,2,3,7,7};
    int target = 3;
    for(int i = 0; i<sizeof(nums)/sizeof(nums[0]); i++){
        for(int j = i+1; j<4; j++){
            if(nums[i] + nums[j] == target){
                printf("%d %d", i, j);
            }
        }
    }
}