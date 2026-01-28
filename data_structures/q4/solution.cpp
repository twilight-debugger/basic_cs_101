#include<iostream>
#include<vector>
using namespace std;

vector<int> STACK;

void push(int x){
    STACK.push_back(x);
}
void pop(){
    STACK.pop_back();
}
int peek(){
    return STACK[-1];
}

int main(){
    push(69);
    push(29);
    cout << "[";
    for(int element : STACK){
        cout << "\t" << element << " , ";
    } 
    cout << "]" << endl;
    pop();
    peek();
    cout << "[";
    for(int element : STACK){
        cout << "\t" << element << "";
    }
    cout << "]" << endl;
    return 0;
}