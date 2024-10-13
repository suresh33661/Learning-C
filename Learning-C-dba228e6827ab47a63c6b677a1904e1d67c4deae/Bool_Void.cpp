// // #include <iostream>

// // int main(){
// //     bool a = 1233;
// //     std:: cout<< a << std:: endl;
// //     return 0;
// // }

// #include <iostream>
// using namespace std;
//  int main (){
//     int x = 10;
//     float y = 12.5f;
//     float z = true + x + y+ false + y;
//     cout << z << endl;
//     cout << sizeof(bool) << endl;
//     if ((x<y) == true){
//         cout << "x is lesser" <<endl;

//     }
//     else {
//         cout << " y is lesser" << endl;
//     }
//  }

#include <iostream>
using namespace std;
void *ptr;
int main(){
    int a = 10;
    ptr = &a;
    cout << *(int*)ptr << endl;
}