#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

void insertAtEnd(struct Node** head, int data){
    struct Node* newNode = new Node;

    newNode->data = data;
    newNode->next = NULL;

    if(*head == NULL){
        *head = newNode;
        return;
    }

    struct Node* last = *head;

    while (last->next != NULL)
    {
        last = last->next;
    }

    last->next = newNode;
    return;
}

void insertAtStart(struct Node** head, int data){
    struct Node* newNode = new Node;
    newNode->data = data;
    newNode->next = *head;
    *head = newNode;
}

void insertAfter(struct Node** head, int data, int location){
    struct Node* newNode = new Node;
    newNode->data = data;

    struct Node* loc = *head;
    while(loc != NULL && loc->data != location){
        loc = loc->next;
    }

    if(loc == NULL){
        cout << "Location not found";
        return;
    }

    newNode->next = loc->next;
    loc->next = newNode;
}

void displayList(struct Node** head){
    if(*head == NULL){
        cout<<"The List is Empty";
        return;
    }

    struct Node* last = *head;
    while(last != NULL){
        cout<<last->data<<"->";
        last = last->next;
    }
    cout<<"NULL\n";
    return;
}

void deleteAtEnd(struct Node** head){
    if(*head == NULL){
        cout<<"List is empty nothing to delete";
        return;
    }

    struct Node* last = *head;

    while(last->next->next != NULL){
        last = last->next;
    }

    cout<<"\nDeleted : "<<last->next->data<<"\n";
    last->next = NULL;
    return;
}

void deleteAtStart(struct Node** head){
    cout<<"\nDeleted : "<<(*head)->data<<"\n";
    *head = (*head)->next;
}

void deleteAtLocation(struct Node** head, int loc){
    struct Node* prev = nullptr;
    struct Node* last = (*head)->next;
    int flag = 0;

    if((*head)->data == loc){
        cout<<"Data deleted : "<<((*head)->data)<<"\n";
        *head = (*head)->next;
        return;
    }

    prev = *head;

    while(last != NULL){
        if(last->data == loc){
            flag = 1;
            cout<<"\nData deleted : "<<(last->data)<<"\n";
            prev->next = prev->next->next;
        }
        last = last->next;
        prev = prev->next;
    }


}

int main(){
    struct Node* head = NULL;

    insertAtEnd(&head, 10);
    insertAtEnd(&head, 20);

    insertAtStart(&head, 5);
    insertAtStart(&head, 1);

    insertAfter(&head, 15, 10);
    insertAfter(&head, 25, 20);

    displayList(&head);

    deleteAtEnd(&head);
    displayList(&head);

    deleteAtEnd(&head);
    displayList(&head);

    deleteAtStart(&head);
    displayList(&head);

    deleteAtLocation(&head, 10);
    displayList(&head);

    deleteAtLocation(&head, 5);
    displayList(&head);
}
