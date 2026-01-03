#include <iostream>
#include <vector>
using namespace std;


// bool linearSearch(int arr[], int x){
//     for (int i = 0; i<arr.length();i++){
//         if(arr[i] == x)
//             return true;
//     }
//     return false;
// }

bool linearSearch(vector<int> arr, int x){
    for( int i =0;i<arr.size();i++){
        if(arr[i]== x)
            return true;
    }
    return false;

}

int main(){

    // c-type array
    // int arr[6] = 
    int x = 3;

    vector<int> arr = {9,8,4,3,2,0,1};

    cout << linearSearch(arr,x) << endl;
    
    return 0;
}