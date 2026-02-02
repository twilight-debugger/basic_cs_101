#include<iostream>
using namespace std;

void fibonacci(int x){
    int a = 0;
    int b = 1;
    int c;
    for(int i = 0;i < x;i++){
        cout << a << " " << endl;
        c = a+b;
        a = b;
        b = c;
    }
}

int main(){
    int x;
    cout << "Enter the number till fibonacci series is required: " << endl;
    cin >> x;

    cout << "The required series is" << endl;
    fibonacci(x);
    return 0;
}