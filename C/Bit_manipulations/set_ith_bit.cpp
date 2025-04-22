#include <iostream>

using namespace std;

void set_bit(int n , int k){
    int mask = 1 << (k-1);
    if (n | mask) {
        cout << "The bit is set" << endl;
    }
    else {
        cout << "The bit is not set" << endl;
    }
 }

 int main(){
    int n ;
    int k;
    cin >> n >> k;
    set_bit(n, k);
    return 0;
 }