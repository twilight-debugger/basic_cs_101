#include<iostream>
#include<vector>
using namespace std;

int greater_than_10(vector<int> arr){
    int count = 0;
    for (int i =0; i < arr.size(); i++){
        if (arr[i]>10){
            count++;
        }
    }
    return count;
}

int main(){
    vector<int> agg = {10,90,80,70};
    cout << greater_than_10(agg);
}