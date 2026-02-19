#include<iostream>
#include<vector>
using namespace std;

void duplicateElements(vector<int> arr){
    sort(arr.begin(),arr.end());
    bool found = false;

    for(int i = 0; i < arr.size(); i++){
        if(arr[i] == arr[i-1]){
            cout << arr[i] << " ";
            found = true;

            while(i < arr.size() && arr[i] == arr[i-1]){
                i++;
            }
        }
    }
    if(!found){
        cout << "None";
    }
}

int main(){
    vector<int> arr = {1,9,3,4,5,6,4,2,2,1};
    cout << "The repeating elements are: ";
    duplicateElements(arr);

    return 0;
}