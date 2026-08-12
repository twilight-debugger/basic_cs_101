
// 8. Check if a string is a palindrome

#include<iostream>
using namespace std;

bool palindrome_string(string s){
    string v = s;
    reverse(v.begin(),v.end());
    if(v != s){
        return false;
    }
    else{
        return true;
    }
}

int main(){
    string s = "Malayalam";
    cout << "Checking if string is palindrome:" << palindrome_string(s) << endl;

    return 0;
}