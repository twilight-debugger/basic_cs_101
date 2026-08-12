
// 7. Reverse a string

#include<iostream>
using namespace std;

string reverse_string(string s){
    reverse(s.begin(),s.end());
    return s;
}

int main(){
    string ex = "dlroW olleH";
    cout << "The reversed string is:" << reverse_string(ex) << endl;
    return 0;
}