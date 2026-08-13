#include <iostream>
using namespace std;

class Node {
public:
    int val;
    Node* next;

    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

class LinkedList {
    Node* head;
    Node* tail;
    int size;

public:
    LinkedList() {
        head = tail = NULL;
        size = 0;
    }

    // Insert at end
    void insertAtTail(int val) {
        Node* temp = new Node(val);

        if (size == 0) {
            head = tail = temp;
        }
        else {
            tail->next = temp;
            tail = temp;
        }

        size++;
    }

    // Insert at head
    void insertAtHead(int val) {
        Node* temp = new Node(val);

        if (size == 0) {
            head = tail = temp;
        }
        else {
            temp->next = head;
            head = temp;
        }

        size++;
    }

    // Display linked list
    void display() {
        Node* temp = head;

        while (temp != NULL) {
            cout << temp->val << " ";
            temp = temp->next;
        }

        cout << endl;
    }
};

int main() {
    LinkedList ll;

    ll.insertAtTail(10);       // 10 -> NULL
    ll.display();

    ll.insertAtTail(20);       // 10 -> 20 -> NULL
    ll.display();

    ll.insertAtTail(30);       // 10 -> 20 -> 30 -> NULL
    ll.display();

    ll.insertAtTail(40);       // 10 -> 20 -> 30 -> 40 -> NULL
    ll.display();

    ll.insertAtHead(50);
     ll.display();             // 50 -> 10 -> 20 -> 30 -> 40 -> NULL

    return 0;
}
// 10 
// 10 20 
// 10 20 30 
// 10 20 30 40 

// 10 
// 10 20 
// 10 20 30 
// 10 20 30 40 
// 50 10 20 30 40 