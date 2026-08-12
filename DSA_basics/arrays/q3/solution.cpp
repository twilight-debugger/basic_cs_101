
// 3. Reverse an array

#include<iostream>
#include<vector>
using namespace std;

vector<int> reverse_array(vector<int> arr){
    reverse(arr.begin(),arr.end());
    return arr;
}

int main(){
    vector<int> arr = {1,2,3,4,5,6,7};
    vector<int> result = reverse_array(arr);
    cout << "The reversed array is:" ;

    for(int i : result){
        cout << i << endl;
    }

    return 0;
}