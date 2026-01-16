#include<iostream>
#include<vector>
using namespace std;

int count_zero(vector<int> arr){
    int count = 0;

    for(int i : arr){
        if(i == 0){
            count++;
            continue;
        }

        while(i > 0){
            if(i % 10 == 0){
                count++;
            }
            i /= 10;   // <-- always divide
        }
    }

    return count;
}

int main(){
    vector<int> arr = {0,1010,3,30303303};
    cout << count_zero(arr) << endl;

    return 0;
}
