#include<iostream>
using namespace std;

int muliplication(int a, int b){
    if(a == 0 || b ==0){
        return 0;
    }
    int total = 0;
    for(int i =0; i<b; i++){
        total+= a;
    }
    if(a>0 and b<0) or (a<0 and b>0){
        return -total
    }
    return total;
}

int main(){
    int x = 5, y = -6;
    cout << "Multiplication: " << muliplication(x,y) << endl;
    return 0;
}