#include <iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<sstream>
using namespace std;
int main(){
    string arr[] ={ "0123","234"," 5678"," 2479"};
    int max =stoi(arr[0]);
    for(int i=0;i<4;i++){
        int x=stoi(arr[i]);
        if(x>max) max =x;

    }
    cout<<max;
}
// 5678