#include<iostream>
using namespace std;

int add(int a, int b){
    return a+b;
}

int subtract(int a,int b){
    if(a>b){
        return a-b;
    }
    else{
        return b-a;
    }
}

int multiplication(int a,int b){
    return a*b;
}

float division(int a,int b){
    if(a>b){
        return (float) b/a;
    }
    else{
        return (float) a/b;
    }
}

int main(){
    int x,y,choice;
    cout << "Enter the two number to be operated: " << endl;
    cin >> x >> y;
 
    cout << "\n Choose the operation to be performed \n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3.Multiplication\n";
    cout << "4. Division\n";
    cout << "Enter your choice: \n";
    cin >> choice;

    switch(choice){
        case 1:
        cout << "Result = " << add(x,y) << endl;
        break;

        case 2:
        cout << "Result = " << subtract(x,y) << endl;
        break;

        case 3:
        cout << "Result = " << multiplication(x,y) << endl;
        break;

        case 4:
         if (y != 0)
                cout << "Result = " << division(x,y);
        else
                cout << "Division by zero not allowed!";
        break;

        default:
        cout << "Invalid choice";
    }
    return 0;
}