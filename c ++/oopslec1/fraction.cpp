#include<iostream>
using namespace std;
class Fraction{ //parent class 
    public:
   int num;
   int den;
   Fraction(int num,int den){
    this->num =num;
    this->den =den;


   }
   void display(){
    cout<<num<<" / "<<den<<endl;
   }
//    Fraction add(Fraction f){
   Fraction operator+(Fraction f){ // add ki jgh operater + bhi likh sakte hai 
    int newnum =this->num*f.den+f.num*this->den;
    int newden = this-> den*f.den;
    Fraction ans(newnum ,newden);
    return ans ;
   }
};

int main(){
    Fraction f1(1,7);
    Fraction f2(1,5);
    f1.display();
    f2.display();
    // Fraction f3 =f1.add(f2);
    Fraction  f3 = f1+f2;
    f3.display();
  
}
// 14

// 14
// 18

// 1 /7
// 1 /5

// 1 / 7
// 1 / 5
// 12 / 35

// 1 / 7
// 1 / 5
// 12 / 35