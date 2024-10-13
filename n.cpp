#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main (){
    int arr2[6] = {2, 1, 4, 3, 9, 6};
    vector<int> vec(arr2, arr2+6);

sort(vec.begin(), vec.end());
for (int i = 0 ; i<vec.size(); i++){
    cout << vec[i] << " ";



}
vector <int> arr3;
arr3.insert(arr3.begin(), arr2, arr2+6);
arr3.insert(arr3.end(), vec.begin(), vec.end());
for (int i = 0 ; i<arr3.size(); i++){
    cout << arr3[i] << " ";
}
}