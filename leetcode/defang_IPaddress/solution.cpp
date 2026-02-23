#include <iostream>
using namespace std;

string defangIPaddr(string address) {
    string new_address;
    for (char c : address) {
        if (c == '.') {
            new_address += "[.]";
        } else {
            new_address += c;
        }
    }
    return new_address;
}

int main() {
    // Test case 1: Normal input
    cout << defangIPaddr("192.168.1.1") << endl;

    // Test case 2: Edge case
    cout << defangIPaddr("0.0.0.0") << endl;

    return 0;
}