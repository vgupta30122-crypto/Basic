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
    // void print(){
    //     cout<<name<<" "<<runs<<" "<<avg<<"\n";
    //     //  cout<<this->name<<" "<<this->runs<<" "<<this->avg<<"\n"; ye bhi same kam krega 
    // }
    // int matches(){
    //     return runs/avg;
    // }
    void change( Cricketer* c){
        // (*c).avg =77.9; // both are same time work  c->avg =69.3; and(*c).avg =77.9; 
        c->avg =69.3;
    }
};
int main(){
     Cricketer c1("virat kohli ",345687,55.4);
    //   Cricketer c2("rohit sharma ",300007,47.9);
    //   Cricketer *p1=&c1;
    //   cout<<(*p1).runs<<"\n";  //345687

      cout<<c1.avg<<"\n"; // 
      c1.change(&c1);
      cout<<c1.avg<<"\n";  //change ho gya hai avg 77.9 
//55.4
// 77.9
    //   (*p1).avg = 77.6; // c1.avg = 77.6
    //   cout<<c1.avg<<"\n"; // 77.6
// 345687
// 55.4
// 77.6

// cout<<c1.name<<" "<<c1.runs<<" "<<c1.avg<<"\n";
// cout<<c2.name<<" "<<c2.runs<<" "<<c2.avg<<"\n";
// c1.name="sachin sir"; // y can change the data like name run and avg 
// c1.print();// cout ki need nhi hai  direct ho jayeag 

// c2.print();
// cout<<c1.matches()<<"\n";
// cout<<c2.matches()<<"\n";
// int x =5;
// cout<<&x<<endl;
// // cout<<&y<<endl;
// int*p=&x;
// cout<<p<<endl;
// cout<<*p<<endl;
// *p =100;  // x =100 ho gya hai derefference khte hai 
// cout<<x<<endl;
}
// 0x61ff0c
// 0x61ff08
// 0x61ff08
// 0x61ff08
// 5
// 100