#include <iostream>
using namespace std;

// A "Node" is like a "Train Carriage"
class Node {
public:
    int data;  // Data is like the "cargo" of the carriage
    Node* next;  // The "next" is the connection to the next carriage (if any)

    Node(int value) {
        data = value;  // Cargo of the carriage
        next = nullptr;  // Initially, no next carriage
    }
};

// LinkedList is like a "Train", with a head (engine) pointing to the first carriage
class LinkedList {
private:
    Node* head;  // The "engine" of the train, pointing to the first carriage

public:
    LinkedList() {
        head = nullptr;  // The train has no carriages at the beginning
    }

    // Add a new carriage to the front of the train (front of the line)
    void addAtFront(int value) {
        Node* newNode = new Node(value);  // New carriage created
        newNode->next = head;  // The new carriage's next points to the previous first carriage
        head = newNode;  // The engine now points to the new first carriage
    }

    // Show the entire train (from the engine to the last carriage)
    void showNode() {
        Node* temp = head;  // Start at the engine (head)

        // Loop through all the carriages in the train
        while (temp != nullptr) {  // Until the train reaches the end (no more carriages)
            cout << temp->data << " -> ";  // Print the cargo (data) of the current carriage
            temp = temp->next;  // Move to the next carriage in the train
        }

        cout << "NULL" << endl;  // When no more carriages, print "NULL" (end of the train)
    }
};

int main() {
    LinkedList train;  // Create a new train

    // Adding carriages (at the front of the train, so the engine is always at the front)
    train.addAtFront(10);  // Add a carriage with cargo 10 to the front
    train.addAtFront(20);  // Add a carriage with cargo 20 to the front
    train.addAtFront(30);  // Add a carriage with cargo 30 to the front

    train.showNode();  // Show the entire train

    return 0;
}