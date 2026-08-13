#include<iostream>
using namespace std;
class player{
    public:   // private  protected bhi rkh sakte hain 
    int score;  // data mamber 
   int health;
   void showhealth(){
    cout<<"health is :"<<health<<"\n";
   }
    void showscore(){
    cout<<"score is:"<<score<<"\n";
   



   }
    

};
class calculator{
public:
    int a;// data member
    int b;
    void add(){  //member function
        cout<<a+b<<"\n";
    }
    void subtract(){
        cout<<a-b;
    }
};

int main(){
   
    int score [100] ={};
    int health[100]={};
    player vishal ;
    vishal.score=80;
    vishal.health=100;
    

    // vishal.mobileno=123456
    vishal.showhealth();
    vishal.showscore();


calculator calsi;
calsi.a=10;
calsi.b=8;
calsi.add();
calsi.subtract();

}

// health is :100
// score is:80

// health is :100
// score is:80
// 18
//  2