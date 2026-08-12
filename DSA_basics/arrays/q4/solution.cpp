
//4. Calculate the sum of all elements in an array

#include<iostream>
#include<vector>
using namespace std;

int sum_array(vector<int> arr){
    int sum = 0;
    for(int i = 0; i < arr.size(); i++){
        sum += arr[i];
    }
    return sum;
}

int main(){
    vector<int> arr = {1,2,3};
    cout << "The sum of array is:" << sum_array(arr) << endl;

    return 0;
}