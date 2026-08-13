#include <iostream>
using namespace std;
int main()
{
    int n;
 cout << "enter a value of n: ";
    cin >> n;
    int k=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<k;
            k++;
        }
        cout<<endl;
        }
    }
//     enter a value of n: 5
// 1
// 23
// 456
// 78910
// 1112131415