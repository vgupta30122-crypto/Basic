#include<iostream>
#include <string>
using namespace std;

// int main(){
//     string str="Vishal Gupta";
//     string s="";
//     for(int i=0;i<str.length();i++){
//         if(str[i]!='a') s+=str[i];
//     }
//     cout<<s;
// }
// Vishl Gupt 

// now recursion 
// void removechar(string ans ,string original){
//     if(original.length()==0){
//         cout<<ans;
//         return ;
//     }
//     char ch=original[0];
//     if(ch=='h')  removechar(ans,original.substr(1));
//     else removechar(ans+ch,original.substr(1));

//     }
//     int main(){
//         string str="physics wallah";
//         removechar("",str);
//     }

// pysics walla
void removechar(string ans ,string original){
    if(original.length()==0){
        cout<<ans;
        return ;
    }
    char ch=original[0];
    if(ch=='h')  removechar(ans,original.substr(1));
    else removechar(ans+ch,original.substr(1));

    }
    int main(){
        string str="physics wallah"; 
        removechar("",str);
    }
    // pysics walla
