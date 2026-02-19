#include<iostream>
#include<vector>
using namespace std;

void reverseArray(vector<int>& arr, int n){
    int left = 0, right = n-1;
    while(left < right){
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
        left++;
        right--; 
    }
}

int main(){
    vector<int> arr = {10,9,8,7,6,5,4,3,2,1};

    reverseArray(arr , arr.size());

    cout << "The reversed array is: ";
    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }
    return 0;
}