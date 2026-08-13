#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n){
    for(int k = 0;k < n-1;k++){
        for(int i = 0; i < n-k-1;i++){
            if(arr[i] > arr[i+1]){
                swap(arr[i],arr[i+1]);
            }
        }
    }
}

int main(){
    int arr[] = {7,9,2,0};
    bubbleSort(arr,4);
    for(int j: arr){
        cout << j << endl;
    }
    return 0;
}