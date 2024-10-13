#include <iostream>
using namespace std;
// int main(){
//     int a = 26;
//     int b = 9 ;
//     int c = a & b;
//     cout << c << endl;
// }

// int main(){
//     int a = 1;
//     int b = 2 ;
//     int c = a | b;
//     cout << c << endl;
// }

int main(){
    int a = 0;
    int c = ~a;
    cout << c << endl;
}
// firstly it convert 0 in bits and invert them
// 0000 to 1111 here we have MSB as 1 so it is negative number
// next it add 1 to 0000 as 2's compliment 
// 0000 + 1 = 0001 it give -1 as output