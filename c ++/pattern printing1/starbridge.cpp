#include <iostream>
using namespace std;
int main()
{
    int n;
 cout << "enter a value of n: ";
    cin >> n;
    int m=n-1;
     int nsp=1;//new lines
     for(int i=1;i<=2*n-1;i++){ // 1st line star ke liye
        cout<<"*";
     }
     cout<<endl;
    for(int i=1;i<=m;i++){
        //stars
        for(int j=1;j<=m+1-i;j++){
            cout<<"*";
        }
        //spaces 
        for(int k=1;k<=nsp;k++){
            cout<<" ";
        }
        nsp+=2;
        //stars
        for(int j=1;j<=m+1-i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
// enter a value of n: 5
// *********
// **** ****
// ***   ***
// **     **
// *       *
