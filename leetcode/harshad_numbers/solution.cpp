#include<iostream>
using namespace std;

int harshad_no(int x){
    int sum = 0;
    int temp = x;

    while(temp != 0){
        int digit = temp % 10;
        sum += digit;
        temp /= 10;
    }
    if(x % sum == 0){
        return sum;
    }
    else{
        return -1;
    }
}

int main(){
    int y;
    cout << "Enter the number: ";
    cin >> y;

    cout << harshad_no(y) << endl;
    return 0;
}