#include <iostream>
#include <queue>

using namespace std;


int main(){
    queue<int>q;

    q.push(10);
    q.push(20);
    q.push(30);

    cout << q.front() << " is the front element in queue" << endl;

    cout << q.back() << " is the rear element in queue" << endl;

     cout << q.back() << " is removed from  queue" << endl;
    q.pop();

    cout << " queue elements: ";
    while(!q.empty()){
        cout<< q.front() << " ";
        q.pop();

    }
    cout << endl;

}