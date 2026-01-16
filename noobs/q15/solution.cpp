#include<iostream>
using namespace std;


int spaceCount(string sen){
    int count = 0;
    for(int i =0; i < sen.size(); i++){
        if(sen[i] == ' '){
            count++;
        }
    }
    return count;
}
int main(){
    string len = "i want it that way";
    cout << spaceCount(len);
    return 0;

}