
#include <iostream>

using namespace std;

# define SIZE 5



class Queue{

    int arr[SIZE];
    int front,rear;

    public:Queue(){
        front = rear = -1;

    }

    void Enqueue(int value){
        if(rear == SIZE -1){
            cout << " queue is full" << endl;
            return;
        }

        if(front == -1) front = 0;
        arr[++rear] = value;

        cout << value << " added in queue" << endl;


    }

    void Dequeue(){

        if(front == -1 || front > rear){
            cout << " queue is empty" << endl;
            return;
        }

        cout << arr[front] << " is removed from queue" << endl;
        front++;
    
    }

    void peek(){
           if(front == -1 || front > rear){
            cout << " queue is empty" << endl;
            return;
        }

        cout << arr[front] << " is the  front element in the queue" << endl;
    }

    void display(){
           if(front == -1 || front > rear){
            cout << " queue is empty" << endl;
            return;
        }

        for(int i = front; i<=rear;i++){
            cout << arr[i] <<  " "  << endl;
        }


    }

};


int main(){

    Queue q1;

    // add

    q1.Enqueue(10);
    
    q1.Enqueue(20);

    q1.Enqueue(30);

    // remove

    q1.Dequeue();

    // front element 

    q1.peek();

    q1.display();

    return 0;


}