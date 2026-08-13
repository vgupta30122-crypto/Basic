// #include<iostream>
// using namespace std;
// void print(int i, int n){
//     if(i>n) 
//     return;
//     cout<<i<<endl; 
//     print(i+1,n); 

// }
// int main(){
//     int n;
//     cout<<"enter the number of n:";
//     cin>>n;
//     cout<<endl;
//     print(1,n);
// }
// enter the number of n:6

// 1
// 2
// 3
// 4
// 5
// 6
#include<iostream>
using namespace std;
void print  (int n){
    // base case 
    if(n==0) 
    return;
      print(n-1); // call
    cout<<n<<endl; // kam
  

}
int main(){
    int n;
    cout<<"enter the number of n:";
    cin>>n;
    print(n);
}
// enter the number of n:4
// 1
// 2
// 3
// 4