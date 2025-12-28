
#include<iostream>
using namespace std;


int main(){
    int n;
    cout << "enter the number for multiplication table" << endl;
    cin >> n;
    for (int i=0 ;i <= 100;i++){
    int val = n*i;
    cout << val << endl;
    }
    return 0;
}