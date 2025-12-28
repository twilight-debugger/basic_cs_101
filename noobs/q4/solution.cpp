#include<iostream>
using namespace std;

int smallest(int a,int b,int c){
    if(a<b && a<c){
        return a;
    } else if(b<a && b<c){
        return b;
    } else if(c<a & c<a){
        return c;
    } else{
        cout << "All numebers are same" << endl;
    }
    return 0;
}

int main(){
    int x = 5;
    int y = 4;
    int z = 3;
    cout << smallest(x,y,z) << endl;

    return 0;
}