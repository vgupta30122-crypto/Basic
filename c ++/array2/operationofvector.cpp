#include<iostream>
#include<vector>

using namespace std;
int main(){
    vector<int>v;  
    v.push_back(6);
    v.push_back(1);
    v.push_back(4);
    
    v.push_back(5);
    v.push_back(7);
    v.push_back(19);
    
    v.push_back(0);

    v.push_back(3);
   for(int i=0;i<v.size();i++){
    cout<<v[i]<<endl;
    
   }
   cout<<endl;
v.pop_back();
for(int i=0;i<v.size();i++){
      cout<<v[i]<<endl;

}
}
// 6
// 1    
// 4
// 5
// 7
// 19
// 0
// 3
  

// means pop back use krne se last ka element disaappier ho jata hai 
// 1
// 4
// 5
// 7
// 19
// 0
// 3

// 6
// 1
// 4
// 5
// 7
// 19
// 0