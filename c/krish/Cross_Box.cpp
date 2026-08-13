#include<iostream>
using namespace std;
int main(){
int r,c;
cout<<"Enter The Number Of Rows:";
cin>>r;
cout<<"Enter The Number Of Column:";
cin>>c;
for(int i=1;i<=r;i++){
    for(int j=1;j<=c;j++){
        if(i==1 ||j==1 || i==r || j==c || i==j || i+j==r+1 ){
            cout<<" * ";
        }
        else{
            cout<<"   ";
        }
    }
     cout<<endl;
}
}