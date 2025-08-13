

// 

#include <iostream>

using namespace std;


// self referential class
class Node {

    public:
    int data;
    Node* next;


    Node(int value){
        data=value;
        next= nullptr;
    }

};

class LinkedList{
    private:
    Node* head;

    public:LinkedList(){
        head= nullptr;
    }

    void insertAtBegining(int value) {

        Node* newNode = new Node(value);

        newNode->next=head;
        head=newNode;

    }

    void displayNode(){
        Node* temp = head;

        while(temp !=nullptr){
            cout << temp->data << "->";
            temp=temp->next;
            
        }

        cout<< "NULL" << endl;

    }

    void insertAtSpecificPos(int value,int pos){

        if(pos == 0){
            insertAtBegining(value);
            return;
        }

        Node* newNode = new Node(value);
        Node* temp = head;

        for(int i=0;i<pos-1&& temp !=nullptr;i++){
            temp=temp->next;
        }

    if(temp==nullptr){

        cout<< "out of range" <<endl;
        return;
    }

    newNode->next=temp->next;
    temp->next=newNode;

    }


    // delete at start
    
    void deleteAtStart(){




        if(head == nullptr){
            cout << "empty list" << endl;
            return;
        }

        Node* temp = head;

        head=head->next;
        delete temp;


    }

    // delete at end 

    void deleteAtEnd () {

        // no node available

        if(head == nullptr){
            cout << "empty list" << endl;
            return;
        }

        // when only one node available

        if(head->next == nullptr){
            delete head;
            head=nullptr;
            return;
        }

        Node* temp = head;

        while(temp->next->next != nullptr){
            temp= temp->next;
        }

        delete temp->next;
        temp->next = nullptr;



    }




 

   

};

int  main(){

    LinkedList list;

// insert

    list.insertAtBegining(10);
    list.insertAtBegining(20);
    list.insertAtBegining(30);

    list.insertAtSpecificPos(10,0);

    list.insertAtSpecificPos(60,3);

    list.insertAtSpecificPos(100,4);
       

// delete 


list.deleteAtStart();

list.deleteAtEnd();

list.deleteAtEnd();




//read

    list.displayNode();


    return 0;


}

