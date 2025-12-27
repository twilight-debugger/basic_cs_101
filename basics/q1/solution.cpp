#include<iostream>
using namespace std;

void swap(int &a,int &b){
    int temp;
    temp = b;
    b = a;
    a = temp; 
    
}

int main(){
    int x = 5;
    int y = 7;
    cout<< x << y << endl;
    swap(x,y);
    cout<< x << y << endl;

    return 0;
}