#include<iostream>
#include <vector>
using namespace std;
int main(){
    // int x;
    // cout<<"enter the target :";
    // cin>>x;
    vector<int> v;
    // vector<int> v2;

     int n;
    cout<<"enter array size :";
    cin>>n;

    cout<<"enter the element :";
    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        v.push_back(q);
    }
vector<int> v2(v.size());
    for(int i=0;i<=v2.size()-2;i++){
        for(int j=i+1;j<=v2.size()-1;j++){
            if(v[i]+v[j]==v.size()-1){
                // cout<<v2[i]<<" ";
        //     if(v[i]+v[j]==x){
        //         cout<<"("<<i<<", "<<j<<")"<<endl;
            }
             cout<<v2[i]<<" ";
        }
    }
}