#include<iostream>
using namespace std;

bool leap_year(int year){
    if(year % 400 == 0){
        return true;
    }
    if(year % 100 == 0){
        return false;
    }
    if(year % 4 == 0){
        return true;
    }
    return false;
}


int main(){
    int year;
    cout << "Enter the year: " << endl;
    cin >> year;

    cout << leap_year(year) << endl;
    return 0;
}