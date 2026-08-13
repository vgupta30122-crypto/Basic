// #include<iostream>
// #include<vector>

// using namespace std;
// int main(){
//     vector<int>v;  // you need not mention the size 
//     v.push_back(6);
//     v.push_back(5);
//     v.push_back(0);
//     v.push_back(3);
//     cout <<v[0]<<" ";
//      cout <<v[1]<<" ";
//       cout <<v[2]<<" ";
//        cout <<v[3]<<" ";
       

// }
// 6 5 0 3
// dicuss size  and  capacity  
// #include<iostream>
// #include<vector>

// using namespace std;
// int main(){
//     vector<int>v;  // you need not mention the size 
//     v.push_back(6);
//     cout<<v.size()<<endl;
//     v.push_back(5);
//     cout<<v.size()<<endl;
//     v.push_back(0);
//     cout<<v.size()<<endl;
//     v.push_back(3);
//     cout<<v.size()<<endl;

// }
// size hai ki kitne elelment aa rahe hai ulternating
// 1
// 2
// 3
// 4
#include<iostream>
#include<vector>

using namespace std;
int main(){
    vector<int>v;  // you need not mention the size 
    v.push_back(6);
    cout<<v.capacity()<<endl;
    v.push_back(5);
    cout<<v.capacity()<<endl;
    
    v.push_back(0);
    cout<<v.capacity()<<endl;
    v.push_back(3);
    cout<<v.capacity()<<endl;


}
// output  this is the capacity means kitne box hai 
// 1
// 2
// 4
// 4
