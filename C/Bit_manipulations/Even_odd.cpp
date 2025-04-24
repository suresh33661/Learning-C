#include <iostream>
using namespace std;

void bitEOshift(int n){
    if ((n >> 1) << 1 == n ) {
        cout << "the given number is even" << endl;
    }
    else {
        cout  << "the given number is odd " << endl;
    }
    
}
void bitEO(int n){
    
 if (n & 1){
   cout << "It a even number" << endl;
 }
  else {
    cout << "It is a odd number" << endl;
  }
}



int main(){
 int n ;
 cout << "Enter a number" << endl;
 cin >> n;
  return 0;
  
}