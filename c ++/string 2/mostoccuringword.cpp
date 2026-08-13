// #include <iostream>
// #include<string>
// #include<algorithm>
// #include<vector>
// #include<sstream>
// using namespace std;
// int main(){
//     string str ="vishal is a software engg. and he is a good mentor as well as .";
//     stringstream ss(str);
//     string temp;
//     vector<string  >v;
//     while(ss>>temp){
//         v.push_back(temp);

//     }
//     // vector print 
//     for(int i=0;i<v.size(); i++){
//         cout<<v[i]<<endl;
//     }
//     cout<<endl;
//     sort(v.begin(),v.end());
//     // vector print 
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<endl;

//     }
// }
// vishal   // ascii value ke according aayya hai 
// is
// a
// software
// engg.
// and
// he
// is
// a
// good
// mentor
// as
// well
// as
// .

// .
// a
// a
// and
// as
// as
// engg.
// good
// he
// is
// is
// mentor
// software
// vishal
// well

#include <iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<sstream>
using namespace std;
int main(){
    string str ="vishal is a software engg. and he is a good mentor as well as .";
    stringstream ss(str);
    string temp;
    vector<string  >v;
    while(ss>>temp){
        v.push_back(temp);


    }
    cout<<endl;
    sort(v.begin(),v.end());
    int maxcount =1;
    int count =1;
    for(int i=1;i<v.size();i++){
        if(v[i]==v[i-1]) count ++;
        else{
            count =1;

        }
        maxcount = max(maxcount,count);
    }
     count =1;
        for(int i=1;i<v.size();i++){
           if(v[i]==v[i-1]) count ++;
        else{
            count =1;

        }  
        if(count ==maxcount ){
            cout <<v[i]<<" "<<maxcount<<endl;
        }
        }
    }
//     a 2
// as 2
// is 2
//  kon sa word kitni baar reapet hua hai 

