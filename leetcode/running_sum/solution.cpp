#include<iostream>
#include<vector>
using namespace std;

vector<int> running_sum(vector<int> nums){
    for(int i = 1; i < nums.size();i++){
        nums[i] += nums[i-1];
    }
    return nums;
}

int main(){
    vector<int> arr = {1,2,3,4,5};
    vector<int> result = running_sum(arr);
    
    for(int i : result){
        cout << i << " ";
    }
    return 0;
}