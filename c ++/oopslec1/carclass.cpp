#include<iostream>
#include <string>
using namespace std ;

class car {  // student is a new data type 
    public:
    string  name;
    int price ;
     int seets ;
     string type;

};
// class car {  // student is a new data type 
//     public:
//     string  name;
//     int price ;
//      int seets ;
//      string type;

// };
// class car {  // student is a new data type 
//     public:
//     string  name;
//     int price ;
//      int seets ;
//      string type;

// };
void print(car c){
    cout<<c.name<<" "<<c.price<<" "<<c.seets<<" "<<c.type<<endl;
}
void change(car & c){
    c.name ="Audi A8";
   
}


int main(){
    // int x=9;
    // cout<<x<<endl;
    // change(x);
    // cout<<x<<endl;
    car c1;
    c1.name="vishal gupta ";
    c1.price=67000;
    c1.seets=9;
    c1.type="honda";
    //  car c2;
    // c2.name="vikas gupta ";
    // c2.price=67567;
    // c2.seets=90;
    // c2.type="tvs";
    //  car c3;
    // c3.name="pramod gupta ";
    // c3.price=6456787;
    // c3.seets=7;
    // c3.type="pASSION";
  
    // cout<<c1.name<<" "<<c1.price<<" "<<c1.seets<<" "<<c1.type<<endl;
    print(c1);
    change(c1);
    print(c1);


}
// vishal gupta  67000 9 honda


// vishal gupta  67000 9 honda
// vikas gupta  67567 90 tvs
// pramod gupta  6456787 7 pASSION

// 9
// 9

// vishal gupta  67000 9 honda
// Audi A8 67000 9 honda