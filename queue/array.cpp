#include <iostream>
using namespace std;

#define SIZE 5

class Queue{
    int arr[SIZE];
    int front,rear;

    public:
    Queue(){
        front = rear = -1;
    }

    void enqueue(int value){
        if(rear==SIZE-1){
            cout << " queue is overflow" << endl;
            return;
        }

        if(front == -1) front=0;
        arr[++rear]=value;

        cout << value << " inserted in queue" << endl;

    }

    void deque(){
        if(front == -1 || front > rear){
            cout << " queue is overflow" << endl;
            return;
        }

        cout << arr[front] << " removed from queue" << endl;
        front++;
    }

    void peek(){
            if(front == -1 || front > rear){
            cout << " queue is overflow" << endl;
            return;
        }

        cout << arr[front] << " is the top element in the queue" << endl;
    }

    void display(){
              if(front == -1 || front > rear){
            cout << " queue is overflow" << endl;
            return;
        }


        for ( int i = front ; i<=rear;i++){
            cout << arr[i] << " ";
        }
        cout << endl;


    }


};


int main(){

    Queue q;

    q.enqueue(10);

    q.enqueue(20);

    q.enqueue(30);

    q.deque();

    q.peek();

    q.display();

    return 0;




}