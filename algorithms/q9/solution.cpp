#include<iostream>
#include<vector>
using namespace std;

int ocurrence(vector<int> arr,int value){
    int repetition = 0;
    for(int i = 0;i<arr.size();i++){
        if(arr[i] == value){
            repetition++;
        }
    }
    return repetition;
}

int main(){
    vector<int> arr = {1,2,4,4,5,3,2,4,2,1};

    int x;
    cout << "Enter the value to be searched: " << endl;
    cin >> x;

    cout << "Number of times value repeated is: " << ocurrence(arr,x) << endl;

    return 0;
}