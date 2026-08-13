#include<iostream>
using namespace std;
class player{
    private:
    int health;
    int age;
    int score;
    bool alive;
    public:
    int gethealth(){
        return health;
    }
     int getage(){
        return age;
    }
     int getscore(){
        return score;
    }
     int isalive(){
        return alive;
    }
      void sethealth(int health){
       this->health=health;
    }
     void  setage(int age){
        this->age=age;
    }
     void setscore(int score){
        this->score=score;
    }
     void setisalive(int alive){
        this->alive =alive;
    }
};
// void add(int a,int b){
//     cout<<a+b;
// }
int addscore(player a,player b){
    return a.getscore() +b.getscore();
}
player getmaxscoreplayer(player a,player b){
    if(a.getscore()>b.getscore()) return a;
    else return b;
}
int main(){
    player vishal;
    player pramod;

    player *urvi = new player;
    player urviobject=*urvi;


    vishal.setage(21);
    vishal.setscore(110);
    vishal.setisalive(true);
    vishal.sethealth(100);

    pramod.setage(21);
    pramod.setscore(100);
pramod.setisalive(true);
    pramod.sethealth(100);
    // urviobject.setscore(50);
    // urviobject.setage(20);
    (*urvi).sethealth(90);
    urvi->sethealth(60);

    // add(10,57);
//67 output 
// cout<<urviobject.getscore()<<endl; both are correct 
cout<<(*urvi).gethealth()<<endl;
cout<<urvi->gethealth()<<endl;
// cout<<addscore(vishal,pramod)<<endl;
player ram =getmaxscoreplayer(vishal ,pramod);
cout<<ram.getscore()<<endl;
cout<<ram.gethealth();
}
//210  addd hai 
// 110 dono me se big score hai 

// 210
// 110
// 100

// 50
// 110
// 100

// 90
// 110
// 100


//200 output 