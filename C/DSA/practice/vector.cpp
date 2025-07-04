#include <iostream>
#include <vector>
#include<unordered_map>
using namespace std;

int main(){
    unordered_map<string, int> umap;
    umap["Apple "] = 10;
    umap["Banana "] = 20;
    for(auto it: umap){
        cout<< it.first << it.second << endl;
    }
}