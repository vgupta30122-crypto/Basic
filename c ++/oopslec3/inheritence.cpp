#include <iostream>
using namespace std;

class vehicle{// base class , parent class 
    public:
    int tyresize;
     int enginesize;
      int lights;
      string companyname;
      void  companyname(){
        cout<<showcompanyname<<endl;
      }
      vehicle (){
        cout<<"vehicle ka constructor call hua hai :\n";
      }
      


};

// class car : public vehicle { // car inherites vechile 
// public:
//     // int tyresize;
//     //  int enginesize;
//       int steeringsize;
    //    int lights;
    //    string companyname;

// };
class Bike :public vehicle {// derived class , child class 
    public:
    // int tyresize;
    //  int enginesize;
      int handlesize;
      Bike(){
        cout<<"bike ka contructer call hua \n";
      }
    //    int lights;
    //    string companyname;

};

int main() {
    Bike honda ;
    honda.handlesize=5;
    honda.tyresize=10;
     honda.enginesize=510;
     honda.companyname="HONDA";
     cout<<honda.tyresize<<endl;
     honda.showcompany();

    


  
}
// vehicle ka constructor call hua hai :
// bike ka contructer call hua 
// 10