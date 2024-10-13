#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int arr1[11] = {2, 3, 1, 3, 2, 4, 6, 7, 9, 2, 19};
    int arr2[6] = {2, 1, 4, 3, 9, 6};
    vector<int> arr3; 
    vector <int> result; // To store the elements of arr1 that are in arr2

    // Step 1: Process arr2 and push corresponding elements from arr1
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 11; j++) {
            if (arr2[i] == arr1[j]) {
                arr3.push_back(arr1[j]);  // Push arr1's element to arr3 if it matches arr2
            }
        }
    }

    // Step 2: Print arr3 (arr1's elements in the order of arr2)
    for (int i = 0 ; i<sizeof(arr1)/sizeof(arr1[0]); i++){
        bool found = false;
        for (int j = 0 ; j < arr3.size(); j++){
            if (arr1[i] == arr3[j]){
                found = true;
                break;
            }
        }
        if (!found){
            result.push_back(arr1[i]);
        }
    }
    sort(result.begin(), result.end());
    vector <int> arr4;
    arr4.insert(arr4.begin(), arr3.begin(), arr3.end());
    arr4.insert(arr4.end(), result.begin(), result.end());
    for (int i = 0 ; i<arr4.size(); i++){
        cout << arr4[i] << " ";
    }
}
