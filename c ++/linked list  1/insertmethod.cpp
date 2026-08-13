// #include <iostream>
// using namespace std;

// class Node {
// public:
//     int val;
//     Node* next;

//     Node(int val) {
//         this->val = val;
//         this->next = NULL;
//     }
// };

// class LinkedList {
//     Node* head;
//     Node* tail;
//     int size;

// public:
//     LinkedList() {
//         head = tail = NULL;
//         size = 0;
//     }

//     // Insert at end
//     void insertAtTail(int val) {
//         Node* temp = new Node(val);

//         if (head == NULL) {
//             head = tail = temp;
//         }
//         else {
//             tail->next = temp;
//             tail = temp;
//         }

//         size++;
//     }

//     // Display Linked List
//     void display() {
//         Node* temp = head;

//         while (temp != NULL) {
//             cout << temp->val << " ";
//             temp = temp->next;
//         }

//         cout << endl;
//     }

//     // Insert at beginning
//     void insertAtHead(int val) {
//         Node* temp = new Node(val);

//         if (head == NULL) {
//             head = tail = temp;
//         }
//         else {
//             temp->next = head;
//             head = temp;
//         }

//         size++;
//     }

//     // Insert at given index
//     void insertAtIdx(int idx, int val) {

//         if (idx < 0 || idx > size) {
//             cout << "Invalid Index" << endl;
//             return;
//         }

//         if (idx == 0) {
//             insertAtHead(val);
//             return;
//         }

//         if (idx == size) {
//             insertAtTail(val);
//             return;
//         }

//         Node* temp = new Node(val);
//         Node* curr = head;

//         // Reach node before index
//         for (int i = 0; i < idx - 1; i++) {
//             curr = curr->next;
//         }

//         temp->next = curr->next;
//         curr->next = temp;

//         size++;
//     }
// };

// int main() {

//     LinkedList ll;

//     ll.insertAtTail(10);
//     ll.display();

//     ll.insertAtTail(20);
//     ll.display();

//     ll.insertAtTail(30);
//     ll.insertAtTail(40);
//     ll.display();

//     ll.insertAtTail(50);
//     ll.display();

//     ll.insertAtHead(24);
//     ll.display();

//     ll.insertAtIdx(4, 80);
//     ll.display();

//     return 0;
// }

// 10
// 10 20
// 10 20 30 40
// 10 20 30 40 50
// 24 10 20 30 40 50
// 24 10 20 30 80 40 50 




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

    // Insert at Tail
    void insertAtTail(int val) {

        Node* temp = new Node(val);

        if (head == NULL) {
            head = tail = temp;
        }
        else {
            tail->next = temp;
            tail = temp;
        }

        size++;
    }

    // Display
    void display() {

        Node* temp = head;

        while (temp != NULL) {
            cout << temp->val << " ";
            temp = temp->next;
        }

        cout << endl;
    }

    // Insert at Head
    void insertAtHead(int val) {

        Node* temp = new Node(val);

        if (head == NULL) {
            head = tail = temp;
        }
        else {
            temp->next = head;
            head = temp;
        }

        size++;
    }

    // Insert at Index
    void insertAtIdx(int idx, int val) {

        if (idx < 0 || idx > size) {
            cout << "Invalid Index" << endl;
            return;
        }

        if (idx == 0) {
            insertAtHead(val);
            return;
        }

        if (idx == size) {
            insertAtTail(val);
            return;
        }

        Node* temp = new Node(val);
        Node* curr = head;

        for (int i = 0; i < idx - 1; i++) {
            curr = curr->next;
        }

        temp->next = curr->next;
        curr->next = temp;

        size++;
    }

    // Delete at Head
    void deleteAtHead() {

        if (head == NULL) {
            return;
        }

        Node* temp = head;
        head = head->next;

        delete temp;
        size--;

        if (head == NULL) {
            tail = NULL;
        }
    }

    // Delete at Tail
    void deleteAtTail() {

        if (head == NULL) {
            return;
        }

        // Only one node
        if (head == tail) {
            delete head;
            head = tail = NULL;
            size = 0;
            return;
        }

        Node* curr = head;

        // Tail se pehle wale node tak jao
        while (curr->next != tail) {
            curr = curr->next;
        }

        delete tail;

        tail = curr;
        tail->next = NULL;

        size--;
    }
    void deleteAtIdx(int idx){
        if(size==0){
            cout<<" list of empty";
            return ;
        }
        else if(idx<0 || idx>=size){
            cout<<"invalid index";
            return ;
        }
        else if (idx ==0) return deleteAtHead();
        else if(idx ==size-1) return deleteAtTail();
        else {
            Node*temp =head;
            for(int i=1;i<=idx-1;i++){
                temp = temp->next;
            }
            temp->next=temp->next->next;
            size --;
        }

    }
};

int main() {

    LinkedList ll;

    ll.insertAtTail(10);
    ll.display();

    ll.insertAtTail(20);
    ll.display();

    ll.insertAtTail(30);
    ll.insertAtTail(40);
    ll.display();

    ll.insertAtTail(50);
    ll.display();

    ll.insertAtHead(24);
    ll.display();

    ll.insertAtIdx(4, 80);
    ll.display();

    ll.deleteAtHead();
    ll.display();

    ll.deleteAtTail();
    ll.display();
    ll.deleteAtIdx(3); 
    ll.display();

    return 0;
}

// 10 
// 10 20 
// 10 20 30 40 
// 10 20 30 40 50 
// 24 10 20 30 40 50 
// 24 10 20 30 80 40 50 
// 10 20 30 80 40 50 
// 10 20 30 80 40

// 10 
// 10 20 
// 10 20 30 40 
// 10 20 30 40 50 
// 24 10 20 30 40 50 
// 24 10 20 30 80 40 50 
// 10 20 30 80 40 50 
// 10 20 30 80 40 
// 10 20 30 40 