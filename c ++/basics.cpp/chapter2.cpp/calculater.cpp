// #include<iostream>
// using namespace std;
// int main(){
//     int x ,y ;
//     cin>>x;
//     char op;
//     cin>>op;
//     cin>>y;
//     if(op=='+') cout<<x+y;
//     if(op=='-') cout<<x-y;
//     if(op=='*') cout<<x*y;
//     if(op=='/') cout<<x/y;
//}
//67*6
//402
#include<iostream>
using namespace std;
int main(){
    int x ,y ;
    cin>>x;
    char op;
    cin>>op;
    cin>>y;
    switch(op){
        case '+':
        cout<<x+y<<"\n";
        break;
        case '-':
        cout<<x-y<<"\n";
        break;
        case '*':
        cout<<x*y<<"\n";
        break;
        case '/':
        cout<<x/y<<"\n";
        break;
        default:
        cout<<"invalid operator"<<"\n";
    }
}