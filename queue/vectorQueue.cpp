#include <iostream>

#include <vector>

using namespace std;



class  vectorQueue{
    vector <int> q;

    public:

    void enqueue(int value){
        q.push_back(value);

        cout << value << " add in queue" << endl;
    }

    void dequeue(){

        if(q.empty()){
            cout << " queue is empty" << endl;
            return;
        }

        cout << q.front() << " is removed from queue" << endl;

        q.erase(q.begin());


    }

    void peek(){

         if(q.empty()){
            cout << " queue is empty" << endl;
            return;
        }

          cout << q.front() << " is the front element in queue" << endl;

    }


    void display(){

           if(q.empty()){
            cout << " queue is empty" << endl;
            return;
        }

        
        cout << "queue elements are ";
        for (int i: q) {
            cout << i << " ";

        }

        cout << endl;



    }


};


int main(){

    vectorQueue q;

    // add

    q.enqueue(10);
    
    q.enqueue(20);

     q.enqueue(30);

    //  remove

    q.dequeue();

   

    //  front element

    q.peek();

    // display

    q.display();


    return 0;
}