// #include<iostream>
// #include <algorithm>
// #include<vector>
// using namespace std ;
// void  sort01(vector<int>&v){
//     int n=v.size();
//     int noo=0;
//     int noz=0;
//     for(int i=0;i<n;i++){
//         if(v[i]==0) noz++;
//         else noo++;
//     }
//     for(int i=0;i<n;i++){
//         if(i<noz) v[i]=0;
//         else v[i]=1;

// }
// }
// void sort01m2(vector<int>&v){
//     int n=v.size();
//     int i=0;
//     int j=n-1;
//     while(i<j){
// if(v[j]==1) j--;
// if(v[i]==0) i++;
// if(i>j) break;  // this is the correction eske bina 1 condition
// // hai jisme code wrong output dega
// if(v[i]==1&&v[j]==0) {
//     v[i]=0;
// v[j]=1;
// i++;
// j--;
//     }

// }
// }

// int main(){
//     vector<int>v;
//     v.push_back(1);
//     v.push_back(1);
//     v.push_back(0);
//     v.push_back(1);
//     v.push_back(0);
//     v.push_back(1);
//     v.push_back(1);
//     v.push_back(0);

//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";

//     }

//     cout<<endl;

//     //sort01(v);  // esme two method hai  m1 to correct hai but m2
//     // me crrection hai
//     sort01m2(v);
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";

//     }

// cout<<endl;
// }

// 1 1 0 1 0 1 1 0
// 0 0 0 1 1 1 1 1

// cw done 
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void sort01m2(vector<int> &v)
{
    int n = v.size();
    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        if (v[i] < 0)
            i++;
        if (v[j] > 0)
            j--;
        // if(i>j) break;
        if (v[i] > 0 && v[j] < 0)
        {
            int temp = v[i];
            v[i] = v[j];
            v[j] = temp;

            i++;
            j--;
        }
    }
}

int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(-7);
    v.push_back(6);
    v.push_back(-4);
    v.push_back(8);
    v.push_back(4);
    v.push_back(-3);
    v.push_back(5);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    cout << endl;

    sort01m2(v);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    cout << endl;
}
// negative ko aage and positive ko peeche krna tha 
// 1 -7 6 -4 8 4 -3 5
// -3 -7 -4 6 8 4 1 5