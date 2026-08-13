// #include<iostream>
// using namespace std;
// int  power (int a, int b){
//     int p=1;
//     for(int i=1;i<=b;i++){
//         p*=a;
//     }
//     return p;
// }
    
// int main(){
//     int a,b;
//     cout<<"enter the number of a and b:";
//     cin>>a>>b;
//     cout<<power(a,b);

// }
// enter the number of a and b:2 3 
// 8 
#include<iostream>
using namespace std;
int  power (int a, int b){
    int p=1;
    for(int i=1;i<=b;i++){
        p*=a;
    }
    return p;
}
int pow(int a,int b){
    if(b==0) return 1;
    return a*pow(a,b-1);
}
    
int main(){
    int a,b;
    cout<<"enter the number of a and b:";
    cin>>a>>b;
    cout<<a<<"raised to the power"<<b<<" is"<<pow(a,b);

} /// esme do fun bne hai pow and power 
// enter the number of a and b:2 3
// 2raised to the power 3is8
// enter the number of a and b:3 8
// 3raised to the power 8is6561
// enter the number of a and b:2 6 
// 2raised to the power6 is64