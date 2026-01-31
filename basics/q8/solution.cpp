#include<iostream>
using namespace std;

int multiplication(int num,int limit){
    for(int i = 0;i<= limit;i++){
        cout << num*i << endl;;
    }
}

int main(){
    int num,num2;
    cout << "Enter the number whose multiplication table is required: " << endl;
    cin >> num;
    
    cout << "Enter the limit:  " << endl;
    cin >> num2;
    
    cout << "Multiplication table of the number is: " << endl;
    multiplication(num,num2);
    return 0;

}