#include <iostream>
using namespace std;

class Student {
public:
    int rno;
    string name;
    Student(){

    }

    Student(int rno ,string name ,float marks) {
        this->rno = rno;
        this->name = name;
        this->marks = marks;
    }
    float getmarks(){
        return marks;
    }
    private:
    float marks;
 
};


    
int main() {
   Student  s1(78,"vishal gupta",78.9);
    // Student s2;
    // s2.rno =78;
    // s2.name ="pramod";
    cout<<s1.getmarks()<<"\n";   
     // es cheej ka use nhi kr skta hu . se  //78.9 

    return 0;

}
// 78.9