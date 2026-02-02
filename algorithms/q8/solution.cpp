#include<iostream>
#include<vector>
using namespace std;

bool linearSearch(vector<int> arr,int x){
    for(int i = 0;i < arr.size();i++){
        if(arr[i] == x){
            return true;
        }
    }
    return false;
}

int main(){
    vector<int> arr = {2,3,4,1,4,1,44,5,3,2};
    cout << linearSearch(arr, 3) << endl;

    return 0;
}