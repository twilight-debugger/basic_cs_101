#include<iostream>
#include<vector>
#include <chrono>
#include<array>

using namespace std;
using namespace std::chrono;


void function_1(){
    array<int,10> arr = {1,2,3,4,5,6,7,8,9,10};
    for( int i: arr){
        cout<<i;
    }
}

void function_2(){
    vector<int> arr = {1,2,3,4,5,6,7,8,9,10};
    for( int i: arr){
        cout<<i;
    }
}

int main(){

    auto start = high_resolution_clock::now();
    function_1();
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);

    auto start1 = high_resolution_clock::now();
    function_2();
    auto stop1 = high_resolution_clock::now();
    auto duration1 = duration_cast<microseconds>(stop1 - start1);

    cout << "Time taken by function1: " << duration.count() << " microseconds" << endl;
    cout << "Time taken by function2: " << duration1.count() << " microseconds" << endl;

    return 0;
}