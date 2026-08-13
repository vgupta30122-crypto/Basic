// #include<iostream>
// #include <algorithm>
// #include<vector>
// using namespace std ;
// int main(){
//     vector<int>v;
//     v.push_back(1);
//     v.push_back(6);
//     v.push_back(5);
//     v.push_back(9);
//     v.push_back(8);
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
//     sort(v.begin(),v.end());
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";

// }
// cout<<endl;
// }

// ye sort ho gya hai accending order me 
// 1 3 5 6 8 
// 1 3 5 6 8

// 1 6 5 9 8 
// 1 5 6 8 9

#include<iostream>
#include <algorithm>
#include<vector>
using namespace std ;
void  sort01(vector<int>&v){
    int n=v.size();
    int noo=0;
    int noz=0;
    for(int i=0;i<n;i++){
        if(v[i]==0) noz++;
        else noo++;
    }
    for(int i=0;i<n;i++){
        if(i<noz) v[i]=0;
        else v[i]=1;

}

}
int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(0);
    v.push_back(0);
    v.push_back(0);
    v.push_back(1);

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

    cout<<endl;

    sort01(v);

    // sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";

    }
cout<<endl;
}

// 1 0 0 0 1 
// 0 0 0 1 1 
