#include <iostream>
using namespace std;
int main()
{
    int n;
 cout << "enter a value of n: ";
    cin >> n;
//     enter a value of n: 4
// *
// ***
// *****
// *******
// space ke baad ka code hai 
    for(int i=1;i<=n;i++){
        // spaces 
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int j=1;j<=2*i-1;j++){
            cout<<"*";
        }
        cout<<endl;
        }
    }
    //final ans 
// enter a value of n: 5
//     *
//    ***
//   *****
//  *******
// *********