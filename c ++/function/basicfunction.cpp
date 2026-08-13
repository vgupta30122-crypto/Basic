// #include<iostream>
// using namespace std;
// void greeting(){
//     cout<<"GOOD MORNING"<<endl;
//     cout<<"HAVE A NICE DAY";
// }
// int main(){
//     greeting();// function call
//     greeting();
//     greeting();
// }
#include<iostream>
using namespace std;
void startringle(int x){
    for(int i=1;i<=x;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
    cout<<endl;
    }
}
int main(){
    startringle(3);
   
    cout<<"GOOD MORNING"<<endl;
    startringle(4);
  
    cout<<"GOOD MORNING"<<endl;
    startringle(5);

}
// ye benifit hai hum middle me kuch bhi print kra sakte hai
// *
// **
// ***
// GOOD MORNING
// *
// **
// ***
// ****
// GOOD MORNING
// *
// **
// ***
// ****
// *****