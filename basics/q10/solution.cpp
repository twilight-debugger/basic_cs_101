#include<iostream>
#include<string>
using namespace std;

int cout_vowel(string sen){
    string vowels = "aeiou";
    int vowel_count = 0;
    for (char c : sen){
        if(vowels.find(c)!= string::npos){
            vowel_count++;
        }
    }
    return vowel_count;
}


int main(){
    string sen;
    sen = "I am Jhon Lewis";
    int result = cout_vowel(sen);
    cout << result;

    return 0;
}