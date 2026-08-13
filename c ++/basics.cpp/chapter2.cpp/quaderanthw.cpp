#include<iostream>
using namespace std;
int main(){
    int x ,y ;
    cout<<"enter a value of x :";
    cin>>x;
    cout<<"enter a value of y:";
    cin>>y;
    if(x>0&&y>0){
        cout<<"point lie in first quaderant";
    }
    else if (x<0&&y>0){
     cout<<"point lie in second quaderant";   
    }
    else if (x<0&&y<0){
     cout<<"point lie in third quaderant";   
    }
    else if ((x==0)&&(y==0)){
     cout<<"point lie in origin ";   
    }
    else if ((x==0)&&(y>0)){
     cout<<"point lie in y axis ";   
    }
    else if ((x>0)&&(y==0)){
     cout<<"point lie in x axis ";  
    } 
    else  {
      cout<<"point lie in fourth quaderant";   
   
    }

}
//ternery operator line reduce krta hai 
// expression 1? expression 2:expression 3
