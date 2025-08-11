

// // 

// #include <iostream>

// using namespace std;


// // self referential class
// class Node {

//     public:
//     int data;
//     Node* next;


//     Node(int value){
//         data=value;
//         next= nullptr;
//     }

// };

// class LinkedList{
//     private:
//     Node* head;

//     public:LinkedList(){
//         head= nullptr;
//     }

//     void insertAtBegining(int value) {

//         Node* newNode = new Node(value);

//         newNode->next=head;
//         head=newNode;

//     }

//     void displayNode(){
//         Node* temp = head;

//         while(temp !=nullptr){
//             cout << temp->data << "->";
//             temp=temp->next;
            
//         }

//         cout<< "NULL" << endl;

//     }


// };

// int  main(){

//     LinkedList list;

//     list.insertAtBegining(10);
//     list.insertAtBegining(20);
//     list.insertAtBegining(30);

//     list.displayNode();

//     return 0;


// }

