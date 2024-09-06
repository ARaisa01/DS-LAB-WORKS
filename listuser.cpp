
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
    int n;
    cout << "Enter the number of nodes: ";
    cin >> n;

    node* head = NULL;
    node* temp = NULL;

    for (int i = 0; i < n; ++i) {
        node* newNode = new node();
        cout << "Enter data for node " << i + 1 << ": ";
        cin >> newNode->data;
        newNode->address = NULL;

        if (head == NULL) {
            head = newNode;
            temp = head;
        } else {
            temp->address = newNode;
            temp = temp->address;
        }
    }

    temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->address;
    }
    cout << endl;

    int val;
    cout << "Enter value to search: ";
    cin >> val;
    search(head, val);

    return 0;
}
