#include <iostream>
#include <vector>

using namespace std;


class queueVector{
    vector <int> q;

    public:

    void enqueue(int value){
        q.push_back(value);

        cout  << value << " added in queue" << endl;

    }

    void dequeue(){
        if(q.empty()){

            cout << " Queue is empty" << endl;
            return;
        }

        cout << q.front() << " is removed from stack" << endl;

        q.erase(q.begin());
    }

    void peek(){
           if(q.empty()){

            cout << " Queue is empty" << endl;
            return;
        }

        cout << q.front() << " is the top element in the queue" << endl;
    }

    void display(){

           if(q.empty()){

            cout << " Queue is empty" << endl;
            return;
        }

        for (int i:q){
            cout << i << " " <<  endl;
        }


    }
};

int main(){
    
queueVector q;

q.enqueue(10);

q.enqueue(20);


q.enqueue(30);

q.dequeue();

q.peek();

q.display();

    return 0;
}