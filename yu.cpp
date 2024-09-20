//Stack and queu implementation using link list

#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = NULL;
    }
};

class Stack {
private:
    Node* top;  // Pointer to the top of the stack

public:
    Stack() {
        top = NULL;  // Initialize top as null (empty stack)
    }
 // Push an element onto the stack
    void push(int value) {
        Node* newNode = new Node(value);  // Create a new node
        newNode->next = top;  // Point the new node to the current top
        top = newNode;  // Update the top to the new node
        cout << value << " pushed to stack\n";
    }

    // Pop an element from the stack
    void pop() {
        if (top == NULL) {
            cout << "Stack is empty\n";
            return;
        }
        Node* temp = top;  // Store the current top in a temp variable
        top = top->next;  // Move the top to the next node
        cout << temp->data << " popped from stack\n";
        delete temp;  // Free the memory of the popped node
    }

    // Display the top element
    void peek() {
        if (top == NULL) {
            cout << "Stack is empty\n";
        } else {
            cout << "Top element is: " << top->data << endl;
        }
    }
 // Check if the stack is empty
    bool isEmpty() {
        return top == NULL;
    }
};

int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);

    s.peek();  // Display the top element

    s.pop();   // Remove top element
    s.peek();  // Display the new top element

    return 0;
}