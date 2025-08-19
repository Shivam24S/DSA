

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


    void deleteAtStart (){


        if(head == nullptr){
            cout << "empty list" << endl;

            return;
        }

        Node* temp = head;
        head=head->next;
        delete temp;


    }

    void deleteAtEnd(){

        if(head == nullptr){
            cout << "empty list" << endl;
            return;
        }

        Node* temp = head;

        if(temp->next == nullptr){
            delete head;
            head= nullptr;
            return;
        }

      while(temp->next->next!= nullptr){
        temp=temp->next;

      }

      delete temp->next;
      temp->next = nullptr;
    

    }

    

    void deleteAtSpecificPos(int pos){

        if(head == nullptr){
            cout << "empty list"<< endl;
            return;
        }

        if(pos<0){
            cout << "invalid position" << endl;
            return;
        }


        if(pos==0){
            deleteAtStart();
            return;
        }


        Node* temp = head;


        for(int i =0; i<pos-1 && temp != nullptr;i++ ){

            temp = temp->next;

        }

        Node* NodeToDelete = temp->next;
        temp->next = NodeToDelete->next;
        delete NodeToDelete;
        return ;

    }


    void updateAtStart (int newValue){

        if(head == nullptr){
            cout << "empty list" << endl;
            return;
        }

        Node* temp = head;

        temp->data = newValue;
        return;
        
    }


    void updateAtEnd(int newValue){

        if(head == nullptr){
            cout << "empty list" << endl;
            return;
        }

        Node* temp = head;

        while(temp->next != nullptr){
            temp= temp->next;

        }

        temp->data = newValue;
        return;


    }



    void updateAtSpecificPos(int newValue,int pos){

        if(head == nullptr){

            cout << "empty list" << endl;
            return;

        }


        if(pos ==0){
            

            updateAtStart(newValue);

            return;
        }

        Node* temp = head;
        

        for(int i =0; i<pos&&temp!= nullptr;i++){
            temp= temp->next;

        }

        if(temp == nullptr ){

            cout<< "out of range" << endl;
            return;
        }

        temp->data= newValue;
        return;


    }


    


};

int  main(){

    LinkedList list;

    list.insertAtBegining(10);
    list.insertAtBegining(20);
    list.insertAtBegining(30);

    list.insertAtSpecificPos(10,0);

    list.insertAtSpecificPos(60,3);

    list.insertAtSpecificPos(100,4);
      
    // list.insertAtSpecificPos(110,7);

    list.deleteAtStart();

    list.deleteAtEnd();

    list.deleteAtSpecificPos(2);

    // update

    list.updateAtStart(24);

    list.updateAtEnd(200);

    list.updateAtSpecificPos(10,100);
    

 
   
    list.displayNode();


    return 0;


}

