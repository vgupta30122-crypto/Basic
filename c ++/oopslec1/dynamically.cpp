#include<iostream>
using namespace std;
class Cricketer{
    public:
    string name;
    int runs;
    float avg;
    Cricketer(string n,int runs ,float avg){
       this->name=n;
       this->runs =runs;
       this->avg=avg;
       
    }

    // void change( Cricketer* c){
    //     // (*c).avg =77.9; // both are same time work  c->avg =69.3; and(*c).avg =77.9; 
    //     c->avg =69.3;
    // }
};
int main(){
     Cricketer c1("virat kohli ",345687,55.4);
      Cricketer *c2 =new Cricketer ("rohit sharma ",300007,47.9);
    //   Cricketer *p1=&c1;
    //   cout<<(*p1).runs<<"\n";  //345687

    //   cout<<c1.avg<<"\n"; // 
    //   c1.change(&c1);
    //   cout<<c1.avg<<"\n"; 
    cout<<c1.name<<" "<<c1.runs<<endl;
     cout<<c2->name<<" "<<c2->runs<<endl;

// virat kohli  345687
// rohit sharma  300007

}