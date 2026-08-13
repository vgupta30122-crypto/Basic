#include <iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<sstream>
using namespace std;
int main(){
    string str ="123456890678956788";   // esse bhi big no ke liye stoll ka use hota hai
    // int x =stoi(str);
    // cout<<x+1;//123457    //123456891


    long long x =stoll(str);
    cout<<x;//123456890678956788    long long bhi 19 digit tk store kr sakta hai 
}