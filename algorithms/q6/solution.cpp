#include<iostream>
using namespace std;

long long factorial(int x){
    long long fact = 1;

    if(x<=0){
        return 0;
    }
    for(int i = 1;i <= x; i++){
        fact*= i;
    }
    return fact;
}

int main(){
    long long y;
    cout << "Enter any number: " << endl;
    cin >> y;

    cout << "The factorial of the given number is: " << factorial(y) << endl;
    return 0;
}