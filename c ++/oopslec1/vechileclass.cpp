#include<iostream>
using namespace std;
class Vechile{ //parent class 
    public:
    int topspeed;
    float mileage;
    string fuel;
    // private:
    // int bootspace;
};

class Twowheeler : public Vechile{  // child class / derived class 
    public:
    // int gears;
};
class  Fourwheeler: public  Vechile { //// child class / derived class 
    public:
};
class  Scooty: public Twowheeler { //// child class / derived class 
    public:
};
class Bike: public Twowheeler{ //// child class / derived class 
    public:
} ;

int main(){
    Bike b1;
    b1.topspeed =100;
    b1.mileage =12.09;
    // b1.gears =6;
}