
// 11. Find the length of a string without using built-in functions

#include<iostream>
using namespace std;

int length_of_string(string s){
    int count = 0;
    for(char x : s){  
        count++;      
    }
    return count;
}

int main(){
    string s = "Hello World";
    cout << "The length of given string is: " << length_of_string(s) << endl;

    return 0;
}