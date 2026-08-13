#include <iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    // string str="my name is vishal gupta"; //23
    // //cout<<str.size();  // string ki lenght nikalte hai 
    // cout<<str.length();// 0 to str.lenght()-1 etne index ho jayenge 
    // int len = str.length();

    // string str ="abcdef";
    // cout<<str<<endl;
    // str.push_back('e');
    // str.push_back('l');
    // str.push_back('t');
    // str.push_back('v');
    // str.push_back('e');
    // cout<<str<<endl;
//abcdef
//abcdefeltve

// string s ="vishal";
// cout<<s<<endl;
// s.push_back('n');
// s.push_back('i');
// s.push_back('d');
// s.push_back('h');
// s.push_back('i');
// vishal
// vishalnidhi
// string s ="vishal";
// cout<<s<<endl;
// s.pop_back();
// s.pop_back();
// s.pop_back();
// s.pop_back();
// cout<<s<<endl;
// vishal
// vi

//+ operater  ka means append krna aage lgana  
// string s ="abcd";
// cout<<s<<endl;
// //string t ="ertyr";
//      s =s+'a';//abcd  //abcda samll ch ko bhi add kr diye direct 
//     s = 'a'+ s; //aabcd ye bhi ho skta hai
// cout<<s<<endl;
  //abcd
// abcdertyr  means charecter bhi add ho skte hai 


// reverse krenge 
//     string str ="angghjghjk";  //  0 1 2 3 4 5 6 7 8 9
//     cout<<str<<endl;
//     reverse(str.begin(),str.end());
//  cout<<str<<endl;

//  angghjghjk
// kjhgjhggna  // reverse ho gya hi 

string str ="angghjghjk";  //  0 1 2 3 4 5 6 7 8 9
    cout<<str<<endl; 
    reverse(str.begin()+2,str.end()-1); // means 2 tk to shi hai but 2 ke baad reverse kr diya 
    // +2 ye index no hai  and end se (-) krne pr utna skip krke middle ka reverse kr dega 
 cout<<str<<endl;

//  angghjghjk
// ankjhgjhgg

// angghjghjk
// anjhgjhggk
 }