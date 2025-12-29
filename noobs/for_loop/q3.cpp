#include<iostream>
using namespace std;

int main(){
    int x;
    cout << " enter the number to find the factorial" << endl;
    cin >> x;
    long long fact = 1;
    for(int i = 1; i<x ; i++){
         fact *= i;
    }
    cout << fact << endl;
    return 0;
}