// #include<iostream>
// #include <vector>
// using namespace std;
// void display(vector<int >&a){
//     for(int i=0;i<a.size();i++){
//         cout<<a[i]<<" ";
//     }
//     cout<<endl;
// }
// int main(){ 
//     vector<int>v;
//     v.push_back(1);
//     v.push_back(3);
//     v.push_back(4);
//     v.push_back(7);
//     v.push_back(8);
//     v.push_back(9);

//     display(v);
//     // reverse 
//     // int i=0;
//     // int j=v.size()-1;
//     // while(i<=j){
//         // swap v[i] and v[j]
//         // int temp =v[i];
//         // v[i]=v[j];
//         // v[j] = temp;
//         // i++;
//         // j--;
    
// //     }
// //     display(v);
// }
// 1 3 4 7 8 9 
// 9 8 7 4 3 1 
// for loop se krna ho to 
// for(int i=0,j=v.size()-1;i<=j;i++,j--){
// int temp =v[i];
//         v[i]=v[j];
//         v[j] = temp;
// }
//  display(v);
// }
// 1 3 4 7 8 9 
// 9 8 7 4 3 1

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
void reverse(vector<int >&v){
int i=0;
    int j=v.size()-1;
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

    display(v);
    
reversepart(0,4,v);
 display(v);
}
// function ke throw reversepart(0,4,v) 0 to 4th idx tk element reverse hui hai
// 1 3 4 7 8 9 
// 8 7 4 3 1 9 