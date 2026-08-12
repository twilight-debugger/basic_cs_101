
// 5. Count occurrences of a specific element

#include<iostream>
#include<vector>
using namespace std;

int count_occurrence(vector<int> arr,int target){
    int count = 0;
    for(int x : arr){
        if(x == target){
            count += 1;
        }
    }
    return count;
}

int main(){
    vector<int> arr = {1,2,3,4,5,6,7};
    cout << "The count of target interger is:" << count_occurrence(arr,10) << endl;

    return 0;
}