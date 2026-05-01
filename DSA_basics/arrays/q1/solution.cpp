
// 1. Find the largest element in an array

#include<iostream>
#include<vector>
using namespace std;

int largest(vector<int> arr){

    if(arr.size() == 0){
        return -1;
    }

    int large = arr[0];
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] > large){
            large = arr[i];
        }
    }
    return large;
}
int main(){
    vector<int> arr = {};
    cout << "The largest element in the array is:" << largest(arr) << endl;

    return 0;
}