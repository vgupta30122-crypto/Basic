// #include<iostream>
// using namespace std;
// class Cricketer{
//     public:
//     string name;
//     int runs;
//     float avg;
//     Cricketer(string n,int runs ,float avg){
//        this->name=n;
//        this->runs =runs;
//        this->avg=avg;
//         // runs =r;
//     }
// };
// int main(){
//      Cricketer c1("virat kohli ",345687,55.4);
//       Cricketer c2("rohit sharma ",300007,47.9);

// cout<<c1.name<<" "<<c1.runs<<" "<<c1.avg<<"\n";
// cout<<c2.name<<" "<<c2.runs<<" "<<c2.avg<<"\n";
    


// }
// virat kohli  345687
// rohit sharma  300007

// virat kohli  345687
// rohit sharma  300007

// virat kohli  345687 55.4
// rohit sharma  300007 47.9

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
        // runs =r;
    }
    void print(){
        cout<<name<<" "<<runs<<" "<<avg<<"\n";
        //  cout<<this->name<<" "<<this->runs<<" "<<this->avg<<"\n"; ye bhi same kam krega 
    }
    int matches(){
        return runs/avg;
    }
};
int main(){
     Cricketer c1("virat kohli ",345687,55.4);
      Cricketer c2("rohit sharma ",300007,47.9);

// cout<<c1.name<<" "<<c1.runs<<" "<<c1.avg<<"\n";
// cout<<c2.name<<" "<<c2.runs<<" "<<c2.avg<<"\n";
// c1.name="sachin sir"; // y can change the data like name run and avg 
c1.print();// cout ki need nhi hai  direct ho jayeag 

c2.print();
cout<<c1.matches()<<"\n";
cout<<c2.matches()<<"\n";

    
    


}

// virat kohli  345687 55.4
// rohit sharma  300007 47.9

// sachin sir 345687 55.4
// rohit sharma  300007 47.9

// virat kohli  345687 55.4
// rohit sharma  300007 47.9
// 6239
// 6263