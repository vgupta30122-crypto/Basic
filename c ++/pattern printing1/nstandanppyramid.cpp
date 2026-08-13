#include <iostream>
using namespace std;
int main()
{
    int n;
 cout << "enter a value of n: ";
    cin >> n;
    int nsp=n-1;
    int nst=1;
    for(int i=1;i<=n;i++){
        // spaces 
       for(int j=1;j<=nsp;j++){
        cout<<" ";
       }
       nsp--;
        for(int k=1;k<=nst;k++){
            cout<<"*";
        }
        nst+=2;
        cout<<endl;
        }
    }
//     enter a value of n: 5
//     *
//    ***
//   *****
//  *******
// *********