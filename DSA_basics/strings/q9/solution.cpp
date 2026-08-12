
// 9. Count vowels in a string

#include<iostream>
using namespace std;

int count_vowel(string s){
    int count = 0;
    for(int i : s){
       if(i == 'a' || i == 'e' || i == 'i' || i == 'o' || i == 'u' ||
           i == 'A' || i == 'E' || i == 'I' || i == 'O' || i == 'U'){
            count++;
        }
    }
    return count;
}

int main(){
    string s = "Hello World";
    cout << "The number of vowels in the given string are:" << count_vowel(s) << endl;

    return 0;
}