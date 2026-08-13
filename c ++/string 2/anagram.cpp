#include <iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    sort(s.begin(),s.end());
    cout<<s<<endl;
      string t;
       getline(cin,t);
       sort(t.begin(),t.end());
       cout<<t<<endl;

      if( s==t) cout<<"true:";
      else{
        cout<<"false:";
      }
}
// vishalgupta
// aaghilpstuv
// ishvalaptgu
// aaghilpstuv
// true: