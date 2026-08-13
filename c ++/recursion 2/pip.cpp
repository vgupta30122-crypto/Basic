#include<iostream>
using namespace std;
void pip(int n){
    if(n==0) return ;
    cout<<"pre"<<n<<endl;
    pip(n-1);
    cout<<"in"<<n<<endl;
    pip(n-1);
    cout<<"post"<<n<<endl;
}
int main(){
    int n;
     cout<<"enter the no of n:";
    cin>>n;
    pip(n);
}
// enter the no of rows of the maze :4
// pre4
// pre3
// pre2
// pre1
// in1
// post1
// in2
// pre1
// in1
// post1
// post2
// in3
// pre2
// pre1
// in1
// post1
// in2
// pre1
// in1
// post1
// post2
// post3
// in4
// pre3
// pre2
// pre1
// in1
// post1
// in2
// pre1
// in1
// post1
// post2
// in3
// pre2
// pre1
// in1
// post1
// in2
// pre1
// in1
// post1
// post2
// post3
// post4