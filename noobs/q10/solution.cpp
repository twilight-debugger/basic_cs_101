#include <iostream>
using namespace std;

string check(double num) {
    if (num > 0)
        return "Positive";
    else if (num < 0)
        return "Negative";
    else
        return "Zero";
}

int main() {
    double n;
    cout << "Enter the number" << endl;
    cin >> n;
    cout << check(n) << endl;

    return 0;
}
