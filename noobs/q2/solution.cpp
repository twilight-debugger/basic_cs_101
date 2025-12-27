#include <iostream>
using namespace std;
enum class divisibility{
    Even = 1,
    Odd = 0
};

int divisibility(int x){
    if(x%2 == 0){
        return 1;
    } else{
        return 0;
    }
}

int main(){
    int x = 8;
    cout<< divisibility(x) << endl;

    return 0;
}