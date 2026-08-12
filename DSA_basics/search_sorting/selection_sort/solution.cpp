#include <iostream>
using namespace std;

void selectionSort(int arr[], int n) {
    
    for (int i = 0; i < n - 1; i++) {
        int iMin = i; 
        
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[iMin]) {
                iMin = j;
            }
        }
        
        int temp = arr[i];
        arr[i] = arr[iMin];
        arr[iMin] = temp;
    }
}

int main() {
    int arr[] = {2, 5, -1, 9, 4};
    selectionSort(arr, 5);

    for (int i = 0; i < 5; i++) {
        cout << arr[i] << endl;
    }
    return 0;
}