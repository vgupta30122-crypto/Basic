#include <iostream>
using namespace std;
int main()
{
    int n;
 cout << "enter a value of n: ";
    cin >> n;
    for(int i=1;i<=n;i++){
        //spaces
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int j=1;j<=n;j++){
            cout<<"*";
        }
        //spaces
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        cout<<endl;
    }
    
 }
//  enter a value of n: 5
//     *****    
//    *****   
//   *****  
//  ***** 
// *****