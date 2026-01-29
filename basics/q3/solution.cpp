#include<iostream>
using namespace std;

int sumofDigits(int num){
    int sum = 0;

    if(num == 0){
        return 0;
    }
    while(num!=0){
        int digit = num % 10;
        sum+= digit;
        num = num / 10;
    }
    return sum;
}

int main(){
    int x;
    cout << "Enter the integer" << endl;
    cin >> x;

    cout << "The sum of digits is: " << sumofDigits(x) << endl;
    return 0;
}