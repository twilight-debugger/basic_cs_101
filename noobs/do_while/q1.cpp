#include <iostream>
using namespace std;

int main(){
    int n;
    int sum = 0;

    do {
        cout << "enter number from 1 to 10" << endl;
        cin >> num;

        sum += num;
    } while (num!=0)

    cout << sum << endl;
    return 0;
    

}