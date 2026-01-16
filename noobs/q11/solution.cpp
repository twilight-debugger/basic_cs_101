#include <iostream>
#include <vector>
using namespace std;

void findFirstAndLast(vector<int> arr){
    cout << "First element: " << arr[0] << endl;
    cout << "Last element: " << arr[arr.size() - 1] << endl;
}

int main(){
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter " << n << " elements:" << endl;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    findFirstAndLast(arr);

    return 0;
}
