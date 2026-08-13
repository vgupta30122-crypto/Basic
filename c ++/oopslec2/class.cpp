#include<iostream>
using namespace std;
class Gun{
    public:
    int ammo;
    int damage;
    int scope;
    // bool alive;
    // Gun gun;
};    
class player {
private:
int health;
int age ;
int score;
bool alive ;
Gun gun;               

class helmet{
    int hp;
    int level;     
    public:
    void sethp(int hp){    
        this->hp =hp;   
    }  
    void setlevel(int level){    
        this->level =level;  
    }
    int  gethp(){
        return hp; 

    }
    int getlevel(){ 
        return level;
    }
};
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
    Gun getGun(){
        return gun;
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
    void setGun(Gun gun){
        this ->gun =gun;
    }
    void sethelmet(int level){
        helmet *Helmet =new helmet;
        Helmet->setlevel(level);
        int health;
        if(level ==1)
        health =29;
        else if (level ==2)
        health =50;
        else if(level ==3)
        health =100;
        else 
        cout<<"error,invalid level!!";
        Helmet->sethp(health);
    }
};
void add(int a,int b){
    cout<<a+b;
}
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

    Gun akm;
    akm.ammo=100;
    akm.damage=50;
    akm.scope=8;


    vishal.setage(21);
    vishal.setscore(110);
    vishal.setisalive(true);
    vishal.sethealth(100);
    vishal.setGun(akm);
    vishal.sethelmet(4);

    Gun awm;
    awm.ammo=18;
    awm.damage=180;
    awm.scope=7;


    pramod.setage(21);
    pramod.setscore(100);
    pramod.setisalive(true);
    pramod.sethealth(100);
    pramod.setGun(awm);
    pramod.sethelmet(5);



    // urviobject.setscore(50);
    // urviobject.setage(20);
    // (*urvi).sethealth(90);
    // urvi->sethealth(60);

    // add(10,57);
//67 output 
// cout<<urviobject.getscore()<<endl; both are correct 
// cout<<(*urvi).gethealth()<<endl;
// cout<<urvi->gethealth()<<endl;
// cout<<addscore(vishal,pramod)<<endl;
Gun gun123 =vishal.getGun();
// Gun gun123 =pramod.getGun();

cout<<gun123.ammo<<endl;
cout<<gun123.damage<<endl;

cout<<gun123.scope<<endl;
player ram =getmaxscoreplayer(vishal ,pramod);
// cout<<ram.getscore()<<endl;
// cout<<ram.gethealth();
}




// error,invalid level!!error,invalid level!!100
// 50
// 8
// error,invalid level!!error,invalid level!!18
// 180
// 7