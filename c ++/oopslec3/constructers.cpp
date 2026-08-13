#include<iostream>
#include<vector>

#include<string>

using namespace std;


class Bike{
    public:
    int tyreSize;
    int engineSize;
    // default constructor 
    Bike (int tyreSize ,int engineSize=200){
        this ->tyreSize=tyreSize;
        this ->engineSize=engineSize;

        // cout<<"constructor  call hua!\n";

    }
    ~Bike(){
        cout<<"destructer call hua "<<endl; 
    }
};
int main(){
    Bike tvs (12,100); // objectb creation ko call jjayegi 
    Bike honda (13,44);
    Bike royalEnfield (17,89) ;
    Bike bajaj(18);
    bool flag =true ;
    if(flag ==true){
        Bike bmw(16 ,1000);
        cout<<bmw.tyreSize<<" "<<bmw.engineSize<<endl;


    }
    cout<<tvs.tyreSize<<" "<<tvs.engineSize<<endl;
    cout<<honda .tyreSize<<" "<<honda.engineSize<<endl;
    cout<<royalEnfield.tyreSize<<" "<<royalEnfield.engineSize<<endl;
    cout<<bajaj.tyreSize<<" "<<bajaj.engineSize<<endl;





}
// constructor  call hua!
// constructor  call hua!
// constructor  call hua!

// constructor  call hua!
// constructor  call hua!
// constructor  call hua!
// 12
// 13
// 17

// constructor  call hua!
// constructor  call hua!
// constructor  call hua!
// 12 100
// 13 44
// 17 89  

// 12 100
// 13 44
// 17 89

// 16 1000
// destructer call hua 
// 12 100
// 13 44
// 17 89
// 18 200
// destructer call hua 
// destructer call hua 
// destructer call hua 
// destructer call hua 
