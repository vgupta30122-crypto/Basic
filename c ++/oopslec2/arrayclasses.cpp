#include<iostream>
#include <string>
using namespace std;


class cricketer{
    public:
    char name;
    int age ;
    int noOfTestMatches;
    int averagescore;

};


int main(){
    
    cricketer virat;
    virat.name='v';
    virat.age=38;
    virat.noOfTestMatches=100;
    virat.averagescore=80;

    cricketer dhoni;
    dhoni.name='D';
     dhoni.age=40;
   dhoni.noOfTestMatches=110;
     dhoni.averagescore=70;

       cricketer   creaketers[2]={virat,dhoni};
       for(int i=0;i<2;i++){
        cout<<creaketers[i].name<<endl;
        cout<<creaketers[i].averagescore<<endl;
        cout<<creaketers[i].noOfTestMatches<<endl;
        cout<<creaketers[i].averagescore<<endl;




       }

}

// v
// 80
// 100
// 80
// D
// 70
// 110
// 70





