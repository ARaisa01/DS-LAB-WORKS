#include <iostream>
using namespace std;

class node {
public:
    int data;
    node* address;
};
void deleteFromBeginning(node*& head) {
    if (head == NULL) return;
    node* temp = head;
    head = head->address;
    delete temp;
}
void deleteFromEnd(node*& head) {
    if (head == NULL) return;
    if (head->address == NULL) {
        delete head;
        head = NULL;
        return;
    }

    node* temp = head;
    while (temp->address->address != NULL) {
        temp = temp->address;
    }
    delete temp->address;
    temp->address = NULL;
}
void deleteFromPosition(node*& head, int position) {
    if (head == NULL) return;
    if (position == 1) {
        deleteFromBeginning(head);
        return;
    }

    node* temp = head;
    for (int i = 1; i < position - 1 && temp != NULL; i++) {
        temp = temp->address;
    }

    if (temp == NULL || temp->address == NULL) {
        cout << "Position out of bounds" << endl;
        return;
    }

    node* nodeToDelete = temp->address;
    temp->address = temp->address->address;
    delete nodeToDelete;
}
int main() {
    node* head = new node();
    head->data = 5;

    head->address = new node();
    head->address->data = 10;

    head->address->address = new node();
    head->address->address->data = 15;

    head->address->address->address = new node();
    head->address->address->address->data = 60;
    head->address->address->address->address = NULL;

    //deleteFromBeginning(head); // Delete the first node
    //deleteFromEnd(head);       // Delete the last node
    deleteFromPosition(head, 2); // Delete the node at position 2

    node* temp = head;
    while (temp != NULL) {
        cout << temp->data << endl;
        temp = temp->address;
    }

    return 0;
}
