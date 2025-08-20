
#include <iostream>

using namespace std;


class Stack {


    public:
    int arr[5];
    int  top;


   
    public:Stack(){
        top=-1;
    }




    // add
    void push(int value ){

        if(top ==4){
            cout<< " stack is full\n" ;
        }else {
            top++;
            arr[top] =value;

            cout << value << " value pushed in stack\n";
        }

    }

    void pop(){
        if(top == -1){
            cout << "empty stack\n" ; 
        }else {

            cout << arr[top] << " removed from stack\n" ;
            top--;

        }
    }

    void peek(){

        if(top == -1){
            cout << " empty stack\n" ;
        }else {
            cout << arr[top] << " this is my top stack element\n";
        }

    }

    void size(){

        if(top == -1){
            cout << " empty stack\n";
        }else {
            cout << "total element in stack is " << top+1 << endl;
        }

    }

};


int main(){


    Stack s;

    // add
    s.push(10);
    s.push(20);
    s.push(30);

    

    // top element before delete
    s.peek();


    s.size();



// remove
    s.pop();

// top element after delete will change
    s.peek();


    // size after delete

    s.size();

    return 0;



    

}
