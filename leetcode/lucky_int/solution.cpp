#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int luckyInt(vector<int> arr){
    unordered_map<int,int> freq;

    for(int i :arr){
        freq[i]++;
    }
    int lucky = -1;
    for(auto& pair : freq){
        if(pair.first == pair.second){
            lucky = max(lucky,pair.first);
        }
    }
    return lucky;
}

int main(){
    vector<int> arr = {1,2,3,4,5};
    cout << "The lucky integer is: " << luckyInt(arr) << endl;
    
    return 0;
}