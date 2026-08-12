#include<iostream>
#include<vector>
using namespace std;

class Node{
private:
    int data;
    Node* ptr; 
public:
    Node(){
        data = 0;
        ptr = nullptr;
    }
    int getData(){
        return data;
    }
    void setData(int sample_data){
        data = sample_data;
    }

    Node* getPointer(){
        return ptr; // :)
    }
    void setPointer(Node& next){
        ptr = &next; // :)
    }
};

int main(){
    Node node1,node2,node3,node4,node5;
   
    
    node1.setData(23);
    node2.setData(56);
    node3.setData(90);
    node4.setData(89);
    node5.setData(67);

    node1.setPointer(node2);
    node2.setPointer(node3);
    node3.setPointer(node4);
    node4.setPointer(node5);
    node5.setPointer(node1);

    Node* head = &node1;
    while(head != nullptr){
        cout << head->getData() << endl;
        head = head->getPointer();
    }
    
    return 0;
}
/*
primitive dataType v/s secondary dataType
pointers
class
structure in C
singly linked list
circular linked list
doubly linked list
*/