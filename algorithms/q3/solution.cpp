#include<iostream>
#include<vector>
using namespace std;

pair<int,int> count_odd_even(vector<int> arr){
    int even_count = 0;
    int odd_count = 0;
    for(int i =0;i <= arr.size();i++){
        if(arr[i]%2 == 0){
            even_count++;
        }
        else{
            odd_count++;
        }
    }
    return {even_count,odd_count};    
}

int main(){
    vector<int> arr = {0,3,4,5,1,4};
    pair<int,int> result = count_odd_even(arr);

    cout << "Even count: " << result.first << endl;
    cout << "Odd count: " << result.second << endl;

    return 0;
}