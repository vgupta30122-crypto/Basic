// #include <iostream>
// using namespace std;
// int main()
// {
//     int n,i,j;
//  cout << "enter a value of n: ";
//     cin >> n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             cout<<j;
//         }
//         cout<<endl;
//     }
    
// }
// enter a value of n: 5
// 12345
// 12345
// 12345
// 12345
// 12345
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n,i,j;
//  cout << "enter a value of n: ";
//     cin >> n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n+1-i;j++){
//             cout<<j;
//         }
//         cout<<endl;
//     }
    
// }
// enter a value of n: 5
// 12345
// 1234
// 123
// 12
// 1
#include <iostream>
using namespace std;
int main()
{
    int n,i,j;
 cout << "enter a value of n: ";
    cin >> n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
    
}
// enter a value of n: 5
// 1
// 12
// 123
// 1234
// 12345