#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector <int> arr = {2,3,4,5,6,7,6};
    int n;
    cout << "Enter the INDEX for the element to be inserted in: " << endl;
    cin >> n;

    int x;
    cout << "Enter the element to be inserted: ";
    cin >> x;
    arr.insert(arr.begin() + n,x);

    for(int i : arr){
        cout << i << " ";
    }
    
    return 0;

}