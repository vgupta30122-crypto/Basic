#include <iostream>
#include <vector>

using namespace std;
int main()
{
   vector<int > v(5); // here  size is decleried 
   for(int i=0;i<5;i++){
    cin>>v[i];
   }  
   for(int i=0;i<5;i++){
    cout<<v[i]<<" ";
   }  
}
// 1 2 3 4 5 
// 1 2 3 4 5