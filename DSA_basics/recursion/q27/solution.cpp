
// 27. Calculate the sum of digits of a number recursively

#include<iostream>
using namespace std;

int sum_of_digits(int x){

    if(x < 0) return -1;
    if(x == 0) return 0;

    int sum = 0;

    while(x > 0){
        sum += x %10;
        x /= 10;
    }
    return sum;
}

int main(){
    int num;

    cout << "Enter a number: ";
    cin >> num;

    cout << "Sum of digits: " << sum_of_digits(num);

    return 0;
}