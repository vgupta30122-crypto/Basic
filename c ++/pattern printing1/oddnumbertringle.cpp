#include <iostream>
using namespace std;
int main()
{
    int n;
 cout << "enter a value of n: ";
    cin >> n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=2*i-1;j+=2){
            cout<<j;
        }
        cout<<endl;
        }
    }
//     enter a value of n: 5
// 1
// 13
// 135
// 1357
// 13579
