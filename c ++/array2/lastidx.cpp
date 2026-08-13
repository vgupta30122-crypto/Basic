#include<iostream>
#include <vector>
using namespace std;
int main(){
      vector <int >v;
      v.push_back(1);
      v.push_back(3);
      v.push_back(5);
      v.push_back(7);
      v.push_back(9);
      v.push_back(1);
      v.push_back(11);
    int x=1;
    int idx=-1;
    // this is forward loop 
    // for(int i=0;i<v.size();i++){
    //     if(v[i]==x) idx =i;  //5
    // }
    for(int i=v.size()-1;i>=0;i--){
        if(v[i]==x) {
            idx =i; 
        break;
      //cout<<idx;
}
}
}
//5  basically idx print krna hai if element nhi hai 
// then return -1