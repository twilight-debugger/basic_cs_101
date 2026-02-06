#include<iostream>
#include<vector>
using namespace std;

vector<int> merge_array(vector<int> arr_a, vector<int> arr_b){
    int i = 0;
    int j = 0;
    vector<int> result;

    sort(arr_a.begin() , arr_a.end());
    sort(arr_b.begin() , arr_b.end());

    while(i < arr_a.size() && j < arr_b.size()){
        if(arr_a[i] <= arr_b[j]){
            result.push_back(arr_a[i]);
            i++;
        }
        else{
            result.push_back(arr_b[j]);
            j++;
        }
    }
    result.insert(result.end() , arr_a.begin() + i , arr_a.end());
    result.insert(result.end() , arr_b.begin() + j , arr_b.end());

    return result;
}

int main(){
    vector<int> x = {1,2,4,6,0,2,3};
    vector<int> y = {5,43,3,21,0};

    vector<int> merged = merge_array(x,y);
    cout << "The two merged arrays are: ";
    for(int value : merged){
        cout << value << " ";
    }
    return 0;
}