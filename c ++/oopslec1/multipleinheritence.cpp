#include<iostream>
using namespace std;
class Cricketer{ //parent class 
    public:
    int runs;
    int wickets;
    int average;

    // int bootspace;
};

class Engnieer{  // child class / derived class 
    public:
    int experience;
    string domain;
};
class  phodu: public Engnieer, Cricketer { //// child class / derived class 
    public:
};
// class  Scooty: public Twowheeler { //// child class / derived class 
//     public:
// };
// class Bike: public Twowheeler{ //// child class / derived class 
//     public:
// } ;

int main(){
    Bike b1;
    b1.topspeed =100;
    b1.mileage =12.09;
    // b1.gears =6;
}