#include<iostream>
using namespace std;

int digit(int n){
    if(n >=0 && n <=9){
        cout << "Digit";
    }
    else{

        cout << "Not digit";
    }
}


int main(){
    int x;
    cout << "Enter the number: " << endl;
    cin >> x;

    digit(x);
    return 0;
}