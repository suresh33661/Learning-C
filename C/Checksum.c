#include <stdio.h>

int checksum(int *data){
    int i ;
    int sum = 0;
    for (i = 0;i<256;i++){
        sum += data[i];

    }
    return sum;
}
int main(){
    int data[] = {1,2,3,4,5,6,7,8,9,0};
    int result = checksum(data);
    printf("The result is %d" , result);
}