#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node*next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};
class Linkedlist{
   Node*head;
Node*tail;
int size;
public:
Linkedlist(){
    head = tail = NULL;
    size =0;
   }
   void insertAtEnd (int val){
    Node * temp =new Node(val);
    if(size ==0) head = tail =temp;
    else {
        tail ->next =temp ;
        tail = temp ;

    }
    size ++;
   }
   void display(){
    Node * temp = head;
    while(temp != NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
   }
   int getSize(){
    return size;
   }
};
int main(){
    // Linkedlist ll=new Linkedlist(); 
    Linkedlist ll;
    ll.insertAtEnd(10);
    ll.display();
    ll.insertAtEnd(20);
    ll.display();
    ll.insertAtEnd(30);
    ll.insertAtEnd(40);
    ll.display();
    cout<<ll.getSize();

}

// 10 
// 10 20 
// 10 20 30 40 
// 4
