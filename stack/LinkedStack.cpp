#include <iostream>

using namespace std;


class Node {
    public:
    int data;
    Node* next;

    Node(int value){
        data=value;
        next=nullptr;
    }
};

class Stack{
    private:
    Node* top;
    int count;

    public:Stack(){
        top= nullptr;
        count=0;
    }


    void push(int value){

        Node* newNode = new Node(value);
        newNode->next=top;
        top=newNode;
        count++;

        cout << " new node added in stack " << value << endl; 


    }

    void pop(){

      if(top == nullptr){
        cout << " empty stack";
        return;
      }


      cout << top->data << " is deleted from stack" << endl;

      Node* temp = top;
      top=temp->next;
      delete temp;
      count --;


    }

    void size(){



        cout << " total element in stack is " << count << endl;

    }

    void peek(){

        
      if(top == nullptr){
        cout << " empty stack";
        return;
      }else {
        cout << " the top element is " << top->data << endl;
      }

    }

};


int main(){

    Stack s;


    // add
    s.push(10);
    
    s.push(20);

    s.push(30);


    s.size();


    // remove

    s.pop();

    s.size();

    s.peek();

    return 0;


}