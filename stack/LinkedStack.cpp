#include <iostream>

using namespace std;


class Node{
    public:
    int data;
    Node* next;

    Node(int value){
        data=value;
        next= nullptr;
    }
};

class Stack{
    private:
    Node* top;
    int count;

    public:
    Stack(){
        top =nullptr;
        count = 0;
    }

    void push(int value){
        Node* newNode = new  Node(value);
        newNode->next=top;
        top=newNode;
        count++;
        cout<< value << " New node pushed in stack\n";
    }

    void pop(){
        if(top == nullptr){
            cout << "empty stack \n";
            return;
        }


        cout << top->data << " removed from stack\n";

        Node* temp = top;
        top = temp->next;
        delete temp;
        count--;

     

        


    }

       void peek(){

        if(top == nullptr){
            cout << " empty stack" ;
            return;
        }

        cout << top->data << " is the top element\n";
            
        }

        void size(){
            cout << "total element in stack is " << count << endl;
        }


};
int main(){

    Stack s;

    s.push(10);

    s.push(20);

    s.pop();

    s.peek();

    s.size();


    return 0;
}