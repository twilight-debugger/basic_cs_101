#include<iostream>
#include<vector>
using namespace std;

// Time complexity ?
int binarySearch(vector<int> arr, int x){
    int low = 0;
    int high = arr.size()-1;
    while(low<=high){
        int mid = low +(high-low)/2;  // maths optimization
        if(x == arr[mid]){
            return mid;
        }else if(x < arr[mid]){
            high = mid-1;
        }else if(x > arr[mid]){
            low = mid+1;
        }
    }
    return -1; // safe case, false case when the element is not found
}

int main(){
    vector<int> arr = {0,4,34,3,2,1};
    // Time complexity ?
    sort(arr.begin(),arr.end());
    cout << binarySearch(arr,34) << endl;

    return 0;
}