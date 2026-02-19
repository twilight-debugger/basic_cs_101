#include<iostream>
#include<climits>
#include<vector>
using namespace std;

int secondLargest(vector<int> arr, int n){

    if (n < 2){
        return -1;
    }
    int largest = INT_MIN;
    int second = INT_MIN;

    for(int i = 0; i < n; i++ ){
        if(arr[i] > largest){
            second = largest;
            largest = arr[i];
        }
        else if(arr[i] > second && arr[i] != largest){
            second = arr[i];
        }
    }
    if (second == INT_MIN){
        return -1; 
    }
    
    return second;
}

int main(){
    vector<int> arr = {1,23,4,5};
    int n = arr.size();

    cout << "The second largest integer is: " << secondLargest(arr,n) << endl;
    return 0;

}