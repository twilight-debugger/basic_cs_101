#include<iostream>
using namespace std;

string isEmpty(string sen){
    if(sen.size() == 0){
        return "Empty";
    }
    else{
        return "Not empty";
    }
}

int main(){
    string ls = "What is this?";
    cout << isEmpty(ls) << endl;
    
}