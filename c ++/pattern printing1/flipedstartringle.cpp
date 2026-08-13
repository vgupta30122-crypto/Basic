// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "enter a value of n: ";
//     cin >> n;
//     for(int i=0;i<=n;i++){
//         //spaces
//         for(int j=1;j<=n-i;j++){
//             cout<<"   ";
//         }
//         // stars 
//         for(int k=1;k<=i;k++){
//             cout<<" * ";
//         }
//         cout<<endl;
//         }
//     }
//     enter a value of n: 5
               
//              * 
//           *  * 
//        *  *  * 
//     *  *  *  * 
//  *  *  *  *  * 
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter a value of n: ";
    cin >> n;
    for(int i=0;i<=n;i++){
        //spaces
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        // stars 
        for(int k=1;k<=i;k++){
            cout<<k;
        }
        cout<<endl;
        }
    }
//     enter a value of n: 5
     
//     1
//    12
//   123
//  1234
// 12345