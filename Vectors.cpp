// #include <iostream>
// using namespace std;
// #include <vector>
// int main(){
//     vector<int> numbers;
//     numbers.push_back(1);
//     numbers.push_back(2);
//     numbers.push_back(3);
//     for (int i = 0 ; i<numbers.size(); i++) {
//         cout << numbers[i] << " ";


//     }


//     cout << numbers.capacity() ;
// }

#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int > numbers(10,5);
    for (int i = 0 ; i<numbers.size(); i++){
        cout << numbers[i] << " ";
    }
}