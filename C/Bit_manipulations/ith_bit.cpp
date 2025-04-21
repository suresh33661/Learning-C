#include <iostream>
using namespace std;
// Function to check if the ith bit of a number is set or not
int Bitcheck(int n, int k){
    int mask = 1 << k;
    if (n & mask){
        cout << "The " << k << "th bit is set" << endl;
    }
    else {
        cout << "The " << k << "th bit is not set" << endl;
    }
}

int main(){
    int n = 5;
    int k = 2;
    Bitcheck(n,k);
    
}