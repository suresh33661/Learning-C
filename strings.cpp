#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

int main(){
    
    cout << "Hello World" << endl;
    char l_name[20];
    cout << "Enter you name" << endl;
    
    char f_name[20];

    cin >> l_name;
    cin >> f_name;
    cout << "Your name is " << l_name << " " << strlen(l_name) << endl;
    cout << "Your name is " << f_name << " " << strlen(f_name) << endl;

}