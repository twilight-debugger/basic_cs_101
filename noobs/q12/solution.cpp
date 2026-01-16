#include<iostream>
#include<vector>
using namespace std;

void change(vector<int> arr){
    for(int i = 0; i <= arr.size(); i++){
        if(arr[i]<0){ 
            arr[i] = 0;
        }
    }
}

int main(){
    vector<int> ls = {2,030,2,2,3,4,5,0};

    for (int x : ls){
        cout << x << " ";
    }
    return 0;
}