
#include <iostream>
#include <vector>
using namespace std;



class Stack{
    vector<int>arr;

    public:

    void push(int value){
        arr.push_back(value);
        cout<< value << " added in stack" << endl;
    }

    void pop(){
        
       if(arr.empty()){
        cout << "stack is empty" << endl;
        return;
       }

       int topElement = arr.back();

       cout << topElement << " is deleted from stack" << endl;

       arr.pop_back();
    }

    void peek(){
        if(arr.empty()){
            cout << "array is empty" <<endl;
            return;
        }
        cout<< arr.back() << " is the top element in stack" << endl;
    }

    void size(){
        if(arr.empty()){
            cout << "array is empty" << endl;
            return;
        }

        cout << arr.size() << "size of the array"  << endl;
    }

    void display(){

          if(arr.empty()){
            cout << "array is empty" << endl;
            return;
        }

        for(int i= arr.size()-1;i>=0;i--){
            cout << arr[i] << " ";
        }
        cout << endl;

    }

    void clear(){
        arr.clear();
        cout << "Stack is cleared" << endl;
    }
};


int main(){

    Stack v1;

    v1.push(10);
    
    v1.push(10);

    v1.push(40);


    v1.pop();

    v1.peek();

    v1.size();

    v1.display();

    v1.clear();

    
    v1.display();



    return 0;

}