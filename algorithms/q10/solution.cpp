#include<iostream>
using namespace std;

string prime_no(int x){
    if(x % 2 == 0){
        return "Not prime";
    }
    else{
        return "Prime";
    }
    }


int main(){
    int y;
    cout << "Enter the number: " << endl;
    cin >> y;

    cout << prime_no(y) << endl;
    return 0;
}