#include <iostream>
using namespace std;

enum class Equal{
    NO = 0,
    YES = 1
};

Equal equal(int x, int y){
    if (x == y){
        return YES;
    }else{
        return NO;
    }
}

int main(){
    int x = 5;
    int y = 9;
    cout << equal(x,y) << endl;

    return 0;
}