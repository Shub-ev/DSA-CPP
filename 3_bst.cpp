#include<iostream>
using namespace std;

struct node {
	int data;
	node* left;
	node* right;
};

node* insert(node* head,int num){
	if(head == nullptr){
		node* n1 = new node;
		n1->data = num;
		n1->left = nullptr;
		n1->right = nullptr;
		return n1;
	}

	if(head->data > num){
		head = insert(head->right, num);
	}
	else{
		head = insert(head->left, num);
	}

	return head;
};

void traverse(node* head){
	node* temp = head;
	if(temp == nullptr){
		return;
	}

	cout<<temp->data<<"->";
	traverse(temp->left);
	cout<<temp->data<<"->";

	cout<<"nullptr";
}

int main() {
	node* head = nullptr;
	head = insert(head, 1);
	insert(head, 2);
	insert(head, 3);
	insert(head, 4);
	insert(head, 5);

	traverse(head);
}