// #include <iostream>
// using namespace std;
// int main(){
//     int a = 10;
//     int b = ++a;
//     cout << "Pre-increment" << endl;
//     cout << a << endl;
//     cout << b << endl;
//     cout << "Post-increment" << endl;
//     int aa = 1;
//     int bb = aa++;
//      cout << aa << endl;
//     cout << bb << endl;
//     cout << "Post-decrement" << endl;
//     int a1 = 1;
//     int b1 = a--;
//     cout << a1 << endl;
//     cout << b1 << endl;
//     cout << "Pre-decrement" << endl;
//     int aa1 = 1;
//     int bb1 = --aa1;
//     cout << aa1 << endl;
//     cout << bb1 << endl;

// }
   

   #include <iostream>
    using namespace std;
    int main(){
        int x = 4, y;
        y = x++ + ++x;
        cout << y << endl;
    }