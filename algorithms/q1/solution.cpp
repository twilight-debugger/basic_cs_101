#include<iostream>
#include<vector>
using namespace std;

int array_sum(vector<int> arr){
    int sum = 0;
    for(int i = 0; i <= arr.size();i++){
        sum+= arr[i];
    }
    return sum;
}

int main(){
    vector<int> ls = {1,2,3,4,5};
    cout << "Sum of array of elements is: " << array_sum(ls) << endl;
    return 0;
}