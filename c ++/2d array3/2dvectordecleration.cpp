#include <iostream>
#include <vector>
using namespace std;
int main(){
    // vector<int > v1(5,3);
    // int arr[3][4];
    vector<vector<int> > v(5, vector<int>(4,2));
    for(int i=0;i<5;i++){
        for(int j=0;j<4;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<v.size()<<endl;  // ye row print krane ke liye hai 
    cout<<v[0].size();// ye coloms print krane ke liye hai 
}
// 2222
// 2222
// 2222
// 2222
// 2222

// 2 2 2 2 
// 2 2 2 2 
// 2 2 2 2 
// 2 2 2 2 
// 2 2 2 2 

// 5
// 4