#include <stdio.h>

int main(){
    int price[] = {7,6,4,3,1};
    int len = sizeof(price)/sizeof(price[0]);

    int max_profit = 0;
    int current = 0;

    for (int i = 0; i<len; i++){
        for (int j = i+1; j<len; j++){
            int profit = price[j] - price[i];
            max_profit = profit > max_profit ? profit : max_profit;
        }
    }
    printf("Maximum profit: %d\n", max_profit);
}