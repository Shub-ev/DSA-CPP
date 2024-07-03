#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int val): data(val), left(nullptr), right(nullptr) {};
};

Node* insert(Node* root, int data){
    if(root == nullptr){
        return new Node(data);
    }

    if(data > root->data){
        root->right = insert(root->right, data);
    }
    else if(data < root->data){
        root->left = insert(root->left, data);
    }
    else{
        cout<<"Duplicate data is not concidered"<<endl;
    }

    return root;
}

void inorderTraversal(Node* root){
    if(root != nullptr){
        inorderTraversal(root->left);
        cout<<root->data<<endl;
        inorderTraversal(root->right);
    }
}

int main(){
    Node* root = nullptr;

    root = insert(root, 40);

    insert(root, 10);
    insert(root, 50);
    insert(root, 20);
    insert(root, 60);

    inorderTraversal(root);
}
