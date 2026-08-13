#include<iostream>
using namespace std;
class player{
    private:   // private  protected bhi rkh sakte hain 
    int score;  // data mamber 
   int health;
   public:
   // setter 
   void setscore(int s){
    cout<<"score set kiya ja rha hai";
    score =s;
   }
    void sethealth(int h){
    cout<<"health change kiya ja rha hai";
    health =h;
     }
     // getter
     int getscore(){
        return score;
     }
     int gethealth(){
        return health;
     }
    

};


int main(){
    player vishal;
    vishal.setscore(19);
    vishal.sethealth(90);
    cout<<vishal.getscore()<<"\n";
    cout<<vishal.gethealth();

   

}
// score set kiya ja rha haihealth change kiya ja rha hai19
// 90