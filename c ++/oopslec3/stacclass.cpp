// #include<iostream>
// #include<vector>

// #include<string>

// using namespace std;


// class Bike{
//     public:
//     static int noofbikes;  // this belong to the class

//     int tyreSize;
//     int engineSize;
//     // default constructor 
//     Bike (int tyreSize ,int engineSize=200){
//         this ->tyreSize=tyreSize;
//         this ->engineSize=engineSize;

//         // cout<<"constructor  call hua!\n"; 

//     }
//     void setnoofbikes(int no){

//     noofbikes =no;
//     noofbikes++;
//     }
//     // ~Bike(){
//     //     cout<<"destructer call hua "<<endl; 
//     // // }
// };
// // void print(){
// //  static int b =10;
// //     cout<<b<<endl;
// //     b++;

// // }
// int Bike::noofbikes =10;


// int main() {
//     // Bike tvs (12,100); // objectb creation ko call jjayegi 
//     // Bike honda (13,44);
//     Bike royalEnfield (17,89) ;
//     Bike bajaj(18);
//     // bool flag =true ;
//     // if(flag ==true){
//     //     Bike bmw(16 ,1000);
//     //     cout<<bmw.tyreSize<<" "<<bmw.engineSize<<endl;
//     royalEnfield.increasementofbikes();
//     cout<<royalEnfield.noofbikes<<endl;
//     cout<<bajaj.noofbikes<<endl;

//      bajaj.increasementofbikes();
//     cout<<royalEnfield.noofbikes<<endl;
//     cout<<bajaj.noofbikes<<endl;




//     }
//     cout<<tvs.tyreSize<<" "<<tvs.engineSize<<endl;
//     cout<<honda .tyreSize<<" "<<honda.engineSize<<endl;
//     cout<<royalEnfield.tyreSize<<" "<<royalEnfield.engineSize<<endl;
//     cout<<bajaj.tyreSize<<" "<<bajaj.engineSize<<endl;

    // print();
    // print();
    // print();







// 10
// 10
// 10


// 10
// 11
// 12   // ye out purt function ke behalf pr hai



#include <iostream>
#include <string>

using namespace std;

class Bike {
public:
    static int noofbikes;   // belongs to class

    int tyreSize;
    int engineSize;

    // Constructor
    Bike(int tyreSize, int engineSize = 200) {
        this->tyreSize = tyreSize;
        this->engineSize = engineSize;
    }

    // Static variable increment function
    void increasementofbikes() {
        noofbikes++;
    }
};

// Definition of static variable
int Bike::noofbikes = 10;

int main() {

    Bike royalEnfield(17, 89);
    Bike bajaj(18);     // engineSize = 200 by default

    cout << "Initial value:\n";
    cout << "Royal Enfield: " << royalEnfield.noofbikes << endl;
    cout << "Bajaj: " << bajaj.noofbikes << endl;

    royalEnfield.increasementofbikes();

    cout << "\nAfter Royal Enfield increment:\n";
    cout << "Royal Enfield: " << royalEnfield.noofbikes << endl;
    cout << "Bajaj: " << bajaj.noofbikes << endl;

    bajaj.increasementofbikes();

    cout << "\nAfter Bajaj increment:\n";
    cout << "Royal Enfield: " << royalEnfield.noofbikes << endl;
    cout << "Bajaj: " << bajaj.noofbikes << endl;

    cout << "\nBike Details:\n";
    cout << "Royal Enfield -> Tyre Size: " << royalEnfield.tyreSize
         << " Engine Size: " << royalEnfield.engineSize << endl;

    cout << "Bajaj -> Tyre Size: " << bajaj.tyreSize
         << " Engine Size: " << bajaj.engineSize << endl;

    return 0;
}
