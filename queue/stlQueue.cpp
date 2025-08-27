

#include <iostream>
#include <queue>

using namespace std;


int main(){
    queue<int>q;

    q.push(10);

    q.push(20);

    q.push(30);

    cout << q.front( ) << " is the front element in queue" << endl;

    cout << q.back() << "is the last element in queue" << endl;

    q.pop();

    cout << q.front() << "is the front element in queue" << endl;

    return 0;



}