#include <iostream>
#include <string>
using namespace std;

class Student {   // Student is a new data type
public:
    string name;
    int rno;
    float gpa;
     Student(){ ///defult constructor

     }

     Student(string s, int r) {// parametrerised constructor
        name = s;
        rno = r;
        // gpa = g;
    }


    Student(string s, int r, float g) {
        name = s;
        rno = r;
        gpa = g;

    }
};

int main() {
    Student s1("Raghav Garg", 76);  
    // ek baar me hi initialise h gya hai
    s1.gpa =8.2; 
    Student s2;
    s2.name ="pramod";
    s2.rno =90;
    s2.gpa=7.9; 
    // Student s2=s3; // deep copy
    // Student s2(s3); // copy constructor




    // return 0;
    cout<<s1.name<<" "<<s1.gpa<<" "<<s1.rno<<" "<<endl;
     cout<<s2.name<<" "<<s2.gpa<<" "<<s2.rno<<" "<<endl;

}
// Raghav Garg 8.2 76   // default constructers banane se sort me bhi excess kr skte hai and likh kr bhi excess kr skte hai 
// Raghav Garg 8.2 76 
// pramod 7.9 90  