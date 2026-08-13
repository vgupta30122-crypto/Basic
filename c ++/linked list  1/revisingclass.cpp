// #include<iostream>
// using namespace std;
// class Student {
//     public:
//     string name;
//     int rno;
//     float marks;
//     Student  (string n ,int r, float m){
//         name =n;
//         rno =r ;
//         marks =m;
//     }
// };
// int main(){
//     Student s ("vishal",79,98.6);
//     cout<<s.name;
// }
// vishal
#include<iostream>
using namespace std;
class Student {
    public:
    string name;
    int rno;
    float marks;
    Student  (string name ,int rno, float marks){
        this->name =name;
         this->rno =rno ;
         this->marks =marks;
    }
};
void change (Student &s){
    s.name ="pramod";
}
int main(){
    Student s ("vishal",79,98.6);
    // cout<<s.name<<"\n";
    // change(s);
    // cout<<s.name<<"\n";
     Student* ptr =&s;
     cout<<s.name<<"\n";
    //  (*ptr).name ="pramod"; 
     ptr->name ="pramod"; // both are correct 
      cout<<s.name<<"\n";


}



// vishal
// pramod  // pass by reference value change ho gai hai

// vishal
// pramod
 