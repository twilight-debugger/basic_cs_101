#include<iostream>
#include<vector>
using namespace std;

bool check_sorted(vector<int> arr){
    for(int i = 0 ; i < arr.size(); i++){
        if(arr[i] > arr[i+1]){
            return false;
        }
    }
    return true;
}

int main(){
    vector<int> arr = {1,3,4,0,5,7};
    cout << check_sorted(arr) << endl;

    return 0;
}