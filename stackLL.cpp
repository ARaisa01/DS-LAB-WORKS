//Stack and implementation using link list

#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;
};

// Stack class
class Stack {
private:
    Node* top;

public:
    Stack() {
        top = NULL;
    }

    void push(int x) {
        Node* temp = new Node;
        temp->data = x;
        temp->next = top;
        top = temp;
    }

    void pop() {
        if (top == NULL) {
            cout << "Stack is empty" << endl;
            return;
        }
        Node* temp = top;
        top = top->next;
        delete temp;
    }
};


int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.pop(); // Removes 30
    s.pop(); // Removes 20
    s.pop(); // Removes 10
    s.pop(); // Stack is empty
    return 0;
}
