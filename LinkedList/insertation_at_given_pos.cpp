


#include <iostream>
using namespace std;


class Node {
public:
    int data;
    Node* next;

    Node(int value){
        data = value;
        next = nullptr;
    }
};


class LinkedList {

    private:
    Node* head;

    public:LinkedList(){
        head = nullptr;
    }

    void addNode(int value) {

        Node* newNode = new Node(value);

        if(head == nullptr){
            head = newNode;
        }else {
            Node* temp = head;

            while(temp->next != nullptr){
                temp = temp->next;
            }

            temp ->next =newNode;

        }
    
    }

        void addAtBegining(int value){
            Node* newNode = new Node(value);
            newNode->next=head;
            head=newNode;

        }

        void insertAtPosition(int value,int pos){

            if(pos == 0){
                addAtBegining(value);
                return;
            }

            
            // create new node 

            Node* newNode = new Node(value);
            Node* temp = head;

            for(int i=0;i<pos-1 && temp !=nullptr;i++){
                temp=temp->next;
            }

            if(temp == nullptr){
                cout << "position out of range!" <<endl;
                delete newNode;
                return;
            }

            newNode -> next = temp ->next;
            temp->next = newNode;



        }


     void deleteAtBegin(){

     
        if(head == nullptr){
            cout << "empty list" << endl;
        }

        Node* temp =head;

        head=head->next;
        delete temp;

     }


     void deleteAtEnd(){

        if(head== nullptr){

            cout << "empty list" <<endl;
        }

        if(head->next == nullptr){
            delete head;
            head = nullptr;
            return;
        }

        Node* temp = head;

        while(temp->next->next != nullptr){
            temp= temp->next;
        }

        delete temp->next;
        temp->next=nullptr;

     }

    




    
       void display() {
            Node* temp = head;

            while(temp !=nullptr){
                cout<<temp->data << "->";
                temp=temp->next;

            }
            cout << "NULL" << endl;
        }


};

int main(){

    LinkedList list;

    list.addNode(10);
     list.addNode(20);
      list.addNode(30);

      list.addAtBegining(40);

      list.insertAtPosition(5,0);

      list.insertAtPosition(50,5);

      list.deleteAtBegin();

      list.deleteAtEnd();



      list.display();

      return 0;


}
