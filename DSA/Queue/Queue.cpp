#include <iostream>

using namespace std;

const int MAX_SIZE = 100; // Maximum size of the queue

int Queue[MAX_SIZE]; // Array to store elements
int front = -1; // Front of the queue
int rear = -1; // Rear of the queue

// Function to push an element into the queue
void push(int value) {
    if (rear == MAX_SIZE - 1) {
        cout << "Queue Overflow. Cannot push element.\n";
        return;
    }
    if (front == -1) {
        front = 0;
    }
    Queue[++rear] = value;
}

// Function to pop an element from the queue
void pop() {
    if (front == -1 || front > rear) {
        cout << "Queue Underflow. Cannot pop element.\n";
        return;
    }
    cout << "Popped element: " << Queue[front++] << endl;
}

// Function to traverse and print the elements of the queue
void traverse() {
    if (front == -1 || front > rear) {
        cout << "Queue is empty.\n";
        return;
    }
    cout << "Elements in the queue: ";
    for (int i = front; i <= rear; ++i) {
        cout << Queue[i] << " ";
    }
    cout << endl;
}

int main() {
    int n, x;
    cout << "Enter the Size of the Data: ";
    cin >> n;

    do {
        cout << "Enter Option: \n1.Push \n2.Pop \n3.Traverse \n4.Exit\n";
        cin >> x;

        switch (x) {
            case 1:
                int value;
                cout << "Enter the element to push: ";
                cin >> value;
                push(value);
                break;
            case 2:
                pop();
                break;
            case 3:
                traverse();
                break;
            case 4:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Enter a valid option.\n";
        }
    } while (x != 4);

    return 0;
}
