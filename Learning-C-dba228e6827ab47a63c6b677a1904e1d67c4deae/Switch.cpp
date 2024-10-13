#include <iostream>
using namespace std;

int main(){
    int a = 20;
    switch (a){
        case 10:
            cout << "a is 10" << endl;
            break;
        case 20:
            cout << "a is 20" << endl;
            break;
        default:
            cout << "a is not 10 or 20" << endl;
    }
    return 0;
}