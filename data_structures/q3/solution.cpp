#include<iostream>
#include<vector>
using namespace std;

int len_arr(vector<int> arr){
    int count = 0;
    for(int i : arr){
        count++;
    }
    return count;
    }

int main(){
    vector<int> arr = {1,2,34,5,4,1,1,43,1,245,3,4};
    cout << "The length of array is: " << len_arr(arr) << endl;

    return 0;
}