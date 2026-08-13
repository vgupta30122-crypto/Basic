#include<iostream>
using namespace std ;
class Student {  // student is a new data type 
    public:
    string  name;
    int rno ;
    float gpa ;

};
class car {  // student is a new data type 
    public:
    string  name;
    int price ;
     int seets ;
     string type;

};
int main(){
    Student s1;
    s1.name="vishal gupta ";
    s1.rno=67;
    s1.gpa=9.7;

     Student s2;
    s2.name="vishal gupta ";
    s2.rno=67;
    s2.gpa=9.7;

     Student s3;
    s3.name="vishal gupta ";
    s3.rno=67;
    s3.gpa=9.7;

    cout<<s1.name<<endl;
    cout<<s2.name<<endl;
    cout<<s3.name<<endl;// aise mai indevedual excess kr skta hu 


}