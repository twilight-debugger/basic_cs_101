#include <iostream>
#include <cctype>
using namespace std;

char caseChange(char c) {
    if (islower(c)) {
        return toupper(c);
    }
    else if (isupper(c)) {
        return tolower(c);
    }

    return c;
}

int main() {
    string s = "hELLO wORLD";

    for (int i = 0; i < s.size(); i++) {
        s[i] = caseChange(s[i]);
    }

    cout << s << endl;

    return 0;
}