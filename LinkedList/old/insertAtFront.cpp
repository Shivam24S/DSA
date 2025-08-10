#include <iostream>
using namespace std;


struct Node {
    int data;
    Node* next;
};


void printList(Node* head){
    while(head != NULL){
        cout << head->data << "->";
        head=head->next;
    }
    
    cout << "NULL" << endl;
}


void insertAtFront(Node*&head,int value){
    Node* newNode = new Node();
    newNode->data=value;
    newNode->next=head;
    head=newNode;
}

int main(){
    
    Node*head = NULL;
    insertAtFront(head,30);
    insertAtFront(head,20);
    insertAtFront(head,10);
    
    printList(head);
    
    return 0;
    
}



