#include <iostream>
#include <string>
#include <cctype>
using namespace std;

void lower_to_upper(string &s) {
    for (char &c : s) {
        c = toupper(c);
    }
}

int main() {
    string text;
    cout << "Enter the text: " << endl;
    getline(cin, text);

    lower_to_upper(text);   
    cout << text << endl;   

    return 0;
}
