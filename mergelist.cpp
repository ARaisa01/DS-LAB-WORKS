#include <iostream>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node(int x) : val(x), next(nullptr) {}
};

class LinkedList {
public:
    Node* mergeTwoLists(Node* list1, Node* list2) {
        Node dummy(0);
        Node* tail = &dummy;

        while (list1 && list2) {
            if (list1->val < list2->val) {
                tail->next = list1;
                list1 = list1->next;
            } else {
                tail->next = list2;
                list2 = list2->next;
            }
            tail = tail->next;
        }
        tail->next = list1 ? list1 : list2;
        return dummy.next;
    }

    void printList(Node* node) {
        while (node != nullptr) {
            cout << node->val << " ";
            node = node->next;
        }
        cout << endl;
    }
};

int main() {
    // Creating list1: 1 -> 3 -> 5
    Node* list1 = new Node(1);
    list1->next = new Node(3);
    list1->next->next = new Node(5);

    // Creating list2: 2 -> 4 -> 6
    Node* list2 = new Node(2);
    list2->next = new Node(4);
    list2->next->next = new Node(6);

    LinkedList ll;
    Node* mergedList = ll.mergeTwoLists(list1, list2);

    cout << "Merged list: ";
    ll.printList(mergedList);

    return 0;
}
