using namespace std;
class Scooty{ //parent class 
    public:
    int topspeed;
    float mileage;
    private:
    int bootspace;
};
class Bike : public Scooty{
    // child class / derived class 
    public:
    int gears;
};
int main(){
    Bike b1;
    b1.topspeed =100;
    b1.mileage =12.09;
    b1.gears =6;
}