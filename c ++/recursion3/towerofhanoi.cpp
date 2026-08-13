#include<iostream>
using namespace std;
void tower(int n,char s,char h, char d){
    if(n==0) return;
    tower (n-1,s,d,h);
    cout << s << " -> " << d << endl;
    tower(n-1,h,s,d);
    return;
}
int main(){
    int n;
   cout<<"enter the number of disks:";
    cin>>n;
    tower(n,'A','B','c');
    return 0;
}
// enter the number of disks:3
// A -> c
// A -> B
// c -> B
// A -> c
// B -> A
// B -> c
// A -> c