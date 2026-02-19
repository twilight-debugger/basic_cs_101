#include<iostream>
#include<vector>
using namespace std;

pair<int,int> twoSpace(vector<int> nums, int target){
    int n = nums.size();

    for(int i = 0; i < n; i++){
        for(int j = i + 1;j < n; j++){
            if(nums[i] + nums[j] == target){
                return {i,j};
            }
        }
    }
    return{-1,-1};
}

int main(){
    vector<int> arr = {1,2,3,4,5};
    int target = 9;
    pair<int,int> result = twoSpace(arr,target);

    if(result.first != -1){
        cout << result.first << " " << result.second << endl;
    }else{
        cout << "No Pairs found" << endl;
    }

    return 0;
}