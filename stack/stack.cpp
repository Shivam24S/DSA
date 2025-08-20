

#include <iostream>
using namespace std;


class Stack{

    int arr[5];
    int top;


    
    public:Stack(){
        top=-1;
    }


    void push(int value){
        if(top==4){
            cout << " stack is full\n";
        }else{
            top++;
            arr[top] = value;
            cout << value << " pushed into stack\n" ;
        }
    }

    void pop(){
        if(top==-1){
            cout << " stack is empty\n" ;
        }else {
           
            cout<< arr[top] << " removed from stack\n" ;
             top--;
        }
    }


    void peek(){
        if(top == -1){
            cout << " stack is empty\n" ;
        }else {
            cout << " top element is "  <<  arr[top] << endl ;
        }

    }

    void size(){

        if(top == -1){
            cout << " stack is empty\n";

        }else {
            cout << " size of the stack is " << top + 1 << endl;
        }

    }

};


int main(){

    Stack s;

    s.push(10);

    
    s.push(20);

    
    s.push(30);

    
    s.push(40);

    s.peek();

    s.pop();

    s.peek();

    s.size();

    return 0;


}