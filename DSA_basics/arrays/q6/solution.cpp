
// 6. Check if an array is sorted

#include<iostream>
#include<vector>
using namespace std;

bool array_sorted(vector<int> arr){
    for(int i = 0;i < arr.size(); i++){
        if(arr[i] < arr[i-1]){
            return false;
        }
    }
    return true;
}

int main(){
    vector<int> arr = {1,2,3,0};
    cout << "Check if array sorted:" << array_sorted(arr) << endl;
    
    return 0;
}