#include <iostream>
using namespace std;

class node {
public:
    int data;
    node* address;
};

void search(node* head, int val) {
    node* temp = head;
    while (temp != NULL) {
        if (temp->data == val) {
            cout << "Found the value " << val << " in the list." << endl;
            return;
        }
        temp = temp->address;
    }
    cout << "Value " << val << " not found in the list." << endl;
}

int main() {
    node* one = new node();
    node* two = new node();
    node* three = new node();

    one->data = 5;
    one->address = two;

    two->data = 10;
    two->address = three;

    three->data = 15;
    three->address = NULL;

    node* temp = one;
    while (temp != NULL) {
        cout << temp->data << endl;
        temp = temp->address;
    }

    search(one, 20);
    search(one, 10);

    return 0;
}
