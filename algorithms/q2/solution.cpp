#include<iostream>
#include<vector>
using namespace std;


int largest_in_array(vector<int> arr){
    int maxVal = arr[0];
    for(int i = 0;i <= arr.size();i++){
        if(arr[i] > maxVal){
            maxVal = arr[i];
        }
    }
    return maxVal;
}
int main(){
    vector<int> ls = {2,3,4,90,8,3};
    cout << "The largest number in the array is: " << largest_in_array(ls) << endl;

    return 0;
}