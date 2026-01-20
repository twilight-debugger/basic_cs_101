#include <iostream>
#include <vector>
using namespace std;

void del_from_arr(vector<int>& arr, int index) {
    if (index < 0 || index >= arr.size()) {
        cout << "Invalid index" << endl;
        return;
    }
    arr.erase(arr.begin() + index);
}

int main() {
    vector<int> v = {1, 2, 3, 4, 5};
    int index = 2;

    del_from_arr(v, index);

    for (int x : v) {
        cout << x << " ";
    }
    return 0;
}
