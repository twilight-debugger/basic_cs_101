#include<iostream>
#include<vector>
using namespace std;

vector<int> shuffle_arr(vector<int> nums, int n){
    vector<int> result(2 * n);
    for(int i = 0; i < 2 * n; i++){
        if(i % 2 == 0){
            result[i] = nums[i / 2];
        }else{
            result[i] = nums[n + i / 2];
        }
    }
    return result;
}

int main(){
    vector<int> arr = {1,2,3,4,4,5,0};
    int n = arr.size() / 2;
    cout << "The shuffled array is :";
    vector<int> result = shuffle_arr(arr , n);

    for(int i : result){
        cout << i << " ";
    }

    return 0;
}