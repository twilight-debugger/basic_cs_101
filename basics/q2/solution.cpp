#include<iostream>
using namespace std;

int countDigit(int num){
    int count = 0;
    if(num == 0){
        return 1;
    }
    if(num < 0){
        num = -num;
    }
    while(num!=0){
        count++;
        num=num / 10;
    }
    return count;
}

int main(){
    int y;
    cout << "Enter the number: " << endl;
    cin >> y;

    cout << "The number of digits in the number are: " << countDigit(y) << endl;
    return 0;
}