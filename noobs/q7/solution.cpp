#include<iostream>
using namespace std;

int result(int x){
    if(x>=40){
        cout << "Pass" << endl;
    }else{
        cout << "Fail";
    }
}

int main(){
    int y;
    cout << "Enter the marks: ";
    cin >> y;

    cout << result(y) << endl;
}