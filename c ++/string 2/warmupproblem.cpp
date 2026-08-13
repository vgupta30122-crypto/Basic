#include <iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str;
    cin>>str;
    int count =0;
    int n=str.length();

    for(int i=0;i<n;i++){
        if(n==1) {
            break;
        }
        if( i==0){
            if(str[i]!=str[i+1])  count ++;
        }
        else if (i==n-1) {
               if(str[i]!=str[i-1])  count ++;
        }
         else if(str[i]!=str[i+1] && str[i]!=str[i-1])  count ++;
    }
cout<<count<<endl;
}

// abbcde
// 4
// a
// 0