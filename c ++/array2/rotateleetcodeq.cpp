#include<iostream>
#include <vector>
using namespace std;
void display(vector<int >&a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void reversepart(int i,int j,vector<int >&v){
   
    while(i<=j){
        //swap v[i] and v[j]
        int temp =v[i];
        v[i]=v[j];
        v[j] = temp;
        i++;
        j--;
    }
    return;
}

int main(){ 
    vector<int>v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(4);
    v.push_back(7);
    v.push_back(8);
    v.push_back(9);
     v.push_back(5);
     display(v);
     int k=50;
     //rotate

     int n=v.size();
     if(k>n) k=k%n;  // esse k ki value kuch bhi le sakte hai
     reversepart(0,n-k-1,v);
     reversepart(n-k,n-1,v);
     reversepart(0,n-1,v); 

display(v);
}
//k=2 pr 
// 1 3 4 7 8 9 5 
// 9 5 1 3 4 7 8
//k=4 
// 1 3 4 7 8 9 5 
// 7 8 9 5 1 3 4 
//k=50 pr
// 1 3 4 7 8 9 5 
// 5 1 3 4 7 8 9 