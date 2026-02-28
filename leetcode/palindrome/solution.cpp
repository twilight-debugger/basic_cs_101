#include<iostream>
using namespace std;

bool palindrome(int x){
    string s = to_string(x);
    string rev = s;
    reverse(rev.begin() , rev.end());
    return s == rev;
}

int main(){
    int x;
    cout << "Enter the number: " << endl;
    cin >> x;

    cout << palindrome(x) << endl;
    return 0;
}