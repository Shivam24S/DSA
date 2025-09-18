

// #include <iostream>

// using namespace std;


// class Node{
//     public:
//     int data;
//     Node* left;
//     Node* right;

//     Node(int value){
//         data = value;
//         right=left=nullptr;
//     }
// };


// class Tree{
//     public:
//     Node* root;

//     Tree(){
//         root = nullptr;
//     }
//     void createTree(){
//     root = new Node(1);
//     root->left = new Node(2);
//     root->right = new Node(3);
//     root->left->left= new Node(4);
//     root->left->right = new Node(5);
    
// }
// void preOrder(Node* node){
//     if(node == nullptr)return;
//     cout << node -> data << " ";
//     preOrder(node->left);
//     preOrder(node->right);
// };

// void inOrder(Node* node){
//     if(node == nullptr)return;
//     inOrder(node->left);
//     cout<<node->data << " ";
//     inOrder(node->right);
// };

// void postOrder(Node* node){
//     if(node == nullptr)return;
//     postOrder(node->left);
//     postOrder(node->right);
//     cout<<node ->data << " ";
// };
// };




// int main(){

//     Tree t;

//     t.createTree();

//     cout << "pre order: ";
//     t.preOrder(t.root);

//     cout << "\n in order: ";
//     t.inOrder(t.root);

//     cout << "\n Post order";
//     t.postOrder(t.root);

//     return 0;

// }







#include <iostream>

using namespace std;


class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int value){
        data = value;
        left = right = nullptr;
    }
};


class Tree{
    public:
    Node* root;

    Tree(){
        root = nullptr;
    }


    void createTree(){
        root = new Node(1);
        root->left = new Node(2);
        root->right = new Node(3);
        root->right->right = new Node(4);
        root->right->left = new Node(5);
    }

    void preOrder(Node * node){
        if(node == nullptr) return;
        cout<< node->data << " ";
        preOrder(node->left);
        preOrder(node->right);
    }

    void inOrder(Node* node){
        if(node == nullptr)return;
        inOrder(node->left);
        cout<< node->data << " ";
        inOrder(node->right);
    }

    void postOrder(Node* node){
        if(node == nullptr)return;
        postOrder(node->left);
        postOrder(node->right);
        cout<<node->data << " ";
    }



};

int main (){

    Tree t;

    t.createTree();

    cout << "pre order ";
    t.preOrder(t.root);

    cout << "\n in order";
    t.inOrder(t.root);

    cout << "\n post order";
    t.postOrder(t.root);

    return 0;
}