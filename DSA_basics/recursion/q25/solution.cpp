
// 25. Find the factorial of a number using recursion

#include<iostream>
using namespace std;

long long factorial(int x){

    if(x < 0){
        return -1;
    }

    if(x == 0 || x == 1){
        return 1;
    }

    long long fact = 1;
    for(int i = 1;i <= x; i++){
        fact *= i;
    }
    return fact;
}

int main(){
    int y = -0;
    cout << "The factorial of the given integer is:" << factorial(y) << endl;

    return 0;
}