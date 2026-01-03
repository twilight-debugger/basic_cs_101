#include<iostream>
#include<vector>
using namespace std;

bool exist(const vector<int>arr,int x){
    for (int i = 0; i<arr.size();i++){
        if(arr[i] == x ){
            return true;
        }  
        }
    return false;
    }

int main(){
    vector<int> arr = {1,2,3,4,5,6};    
    cout << exist(arr,7) << endl;

    return 0;
}