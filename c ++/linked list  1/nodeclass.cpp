#include<iostream>
using namespace std;

class Node{
     public:
    // NODE (int val){
    //     this->val =val;
    // this->next = NULL;

    // }
      int val;
    Node* next;

    // Constructor
    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
    

};
// int main(){
//     // 10 20 30 40 
//     Node a(10);
//      Node b(20);
//      Node c(30);
//       Node d(40);
   
//     //farming linked list 
//     a.next =&b;
//      b.next =&c;
//       c.next =&d;
//     //    d.next =NULL;
//     // cout<<(*((*((*(a.next)).next)).next)).val; 
//     // cout<<(((a.next)->next)->next)->val; // both way are correct
//     Node temp =a;
//     while(temp.next!=NULL){
//         cout<<temp.val<<" ";
//         temp=*(temp.next);
//     } 


// }
// // 40
// // 40 40
// // 10 20 30 
void display (Node*head){
    Node*temp =head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp =temp->next;

    }
}
int main(){
    Node*a=new Node(10);
    Node*b=new Node(20);
    Node*c=new Node(30);
    Node*d=new Node(40);
    // Node*a=new Node(10);
    a->next =b;
     b->next =c;
      c->next =d;
      display(a);


}
// 10 20 30 40 