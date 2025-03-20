#include <stdio.h>
int checksum(int *data){
    char i;
    int sum = 0;
    for (i=0; i<64; i++){
        sum += data[i];

    }
    return sum;
}

int main(){
    int data[64] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int sum = checksum(data);
    printf("sum = %d\n", sum);
    //return 0;
}