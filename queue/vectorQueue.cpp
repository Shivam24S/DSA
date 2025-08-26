
#include <iostream>
#include <vector>

using namespace std;


class vectorQueue{

    vector <int>q;

    public:

    void enqueue(int value){
        q.push_back(value);

        cout << value << " added in queue" << endl;

    }

    void dequeue(){

        if(q.empty()){
            cout << " queue is empty" << endl;
            return;
        }

        cout << q.front() << " is removed from stack" << endl; 

        q.erase(q.begin());

    
    }

    void peek(){
        if(q.empty()){
            cout << " queue is empty" << endl;
            return;
        }
        cout << q.front() << " is the first element in the queue" << endl;
    }

    void display(){
          if(q.empty()){
            cout << " queue is empty" << endl;
            return;
        }

        cout <<  " queue elements:";
        for (int i :q) cout << i << " ";
        cout << endl;

    }

};

int main(){

    vectorQueue q;

    q.enqueue(10);
    
    q.enqueue(20);
    
    q.enqueue(30);

    q.dequeue();

    q.peek();

    q.display();

    return 0;
}