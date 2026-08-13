// #include<iostream>
// using namespace std;
// void print  (int n){
//     for(int i=n;i>=1;i--){
//         cout<<i<<endl;
//     }
//     return;
// }
// int main(){
//     int n;
//     cout<<"enter the number of n:";
//     cin>>n;
//     print(n);
// }
// enter the number of n:5
// 5
// 4
// 3
// 2
// 1
// hw done with recursion
#include<iostream>
using namespace std;
void print  (int n){
    // base case 
    if(n==0) 
    return;
    cout<<n<<endl; // kam
    print(n-1); // call

}
int main(){
    int n;
    cout<<"enter the number of n:";
    cin>>n;
    print(n);
}
// enter the number of n:5
// 5
// 4
// 3
// 2
// 1
