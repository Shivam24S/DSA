

#include <iostream>
#include <vector>
using namespace std;


class Stack{
    vector<int>arr;

    public:

    // add 

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

        cout << topElement << " removed from stack" << endl;

        arr.pop_back();

        
    }

    void peek(){

        cout << arr.back() << " is the top element" << endl;

    }

    void size(){
        cout << "total element in array is "  << arr.size() << endl;
    }

    void deleteAll(){

        arr.clear();

        cout << " stack is cleared now" << endl;
    
    }

    void display(){

        for(int i=arr.size()-1;i>=0;i--){
            cout<<" stack element " << arr[i] << " " << endl;
        }



    }

};





int main(){

    Stack s1;

    // add
    s1.push(10);

    s1.push(20);

    s1.push(30);

    s1.push(40);

    s1.push(50);




    // remove

    s1.pop();

    s1.peek();

    s1.size();

    // s1.deleteAll();

     s1.size();

     s1.display();

    return 0;

     


}
