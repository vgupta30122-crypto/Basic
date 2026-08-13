// #include<iostream>
// class student {
//     char name [30];
//     int rollno;
//     int age ;
//     int mobileno;
//     char address[50];


// };
// using namespace std ;
// int main(){
//     int health[100] ={};
//     int score[100]={};
//     char name[100][10]={};
//     student vishal;
// }

#include<iostream>
class player{
    public:   // private  protected bhi rkh sakte hain 
    int score;  // data mamber 
   
    int health;
    // char[20] name;

};
using namespace std;
int main(){
    player vishal ;
    vishal.score =80;
     vishal.health =100;
     cout<<vishal.score<<endl;
     cout<<vishal.health<<endl;
     
     player pramod;
      pramod.score=220;
      pramod.health=670;
        cout<<pramod.score<<endl;
     cout<<pramod.health<<endl;


}

// 80
// 100

// 80
// 100
// 220
// 670