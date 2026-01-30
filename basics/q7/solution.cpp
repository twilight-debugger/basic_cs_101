#include<iostream>
using namespace std;

// A -> 90 and above , B -> 80 above , C -> 70 above , D -> 60 above 

string grade(int marks){
    if(marks >= 90){
        return "Grade A";
    }
    if(marks >= 80){
        return "Grade B";
    }
    if(marks >= 70){
        return "Grade C";
    }
    if(marks >= 60){
        return "Grade D";
    }
    else{
        return "Fail";
    }
}

int main(){
    int y;
    cout << "Enter the marks: " << endl;
    cin >> y;
    cout << grade(y) << endl;

    return 0;
}