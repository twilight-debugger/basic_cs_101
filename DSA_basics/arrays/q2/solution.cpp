
// 2. Find the smallest element in an array

#include<iostream>
#include<vector>
using namespace std;

int smallest(vector<int> arr){

    if(arr.size() == 0){
        return -1;
    }

    int small = arr[0];
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] < small){
            small = arr[i];
        }
    }
    return small;
}

int main(){
    vector<int> arr = {1,2,3,4,5};
    cout << "The smallest integer is:" << smallest(arr) << endl;

    return 0;
}

