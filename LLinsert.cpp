//link list and search

#include <iostream>
using namespace std;

class node {
public:
    int data;
    node* address;
};
void insertAtBeginning(node*& head, int newData) {
    node* newNode = new node();
    newNode->data = newData;
    newNode->address = head;
    head = newNode;
}
void insertAtEnd(node* head, int newData) {
    node* newNode = new node();
    newNode->data = newData;
    newNode->address = NULL;

    if (head == NULL) {
        head = newNode;
        return;
    }

    node* temp = head;
    while (temp->address != NULL) {
        temp = temp->address;
    }
    temp->address = newNode;
}
void insertAtPosition(node*& head, int position, int newData) {
    if (position == 1) {
        insertAtBeginning(head, newData);
        return;
    }

    node* newNode = new node();
    newNode->data = newData;

    node* temp = head;
    for (int i = 1; i < position - 1 && temp != NULL; i++) {
        temp = temp->address;
    }

    if (temp == NULL) {
        cout << "Position out of bounds" << endl;
        return;
    }

    newNode->address = temp->address;
    temp->address = newNode;
}

int main() {
    node* head = new node();
    head->data = 5;
    head->address = new node();
    head->address->data = 10;
    head->address->address = new node();
    head->address->address->data = 15;
    head->address->address->address = NULL;

    insertAtBeginning(head, 1); // Insert 1 at the beginning
    insertAtEnd(head, 20);      // Insert 20 at the end
    insertAtPosition(head, 3, 7); // Insert 7 at position 3

    node* temp = head;
    while (temp != NULL) {
        cout << temp->data << endl;
        temp = temp->address;
    }

    return 0;
}

