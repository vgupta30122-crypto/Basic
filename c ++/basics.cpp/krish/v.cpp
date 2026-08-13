// #include<iostream>
// using namespace std;
// int main(){
//     int r,c;
//     cout<<"ENTER The Number:";
//     cin>>r;
//     c=r+(r+1);
//     for(int i=1;i<=r;i++){
//         for(int j=1;j<=c;j++){
//             if(i==j || i+j==(2*r)){
//                 cout<<" * ";
//             }
//             else{

//                 cout<<"   ";
//             }
//         }
//              cout<<"\n";
//    }
//   int n;
//   cout<<"enter a number:";
//   cin>>n;
// for (int i=1;i<=n;i++){
//         for( int j=1;j<=n; j++){
//             if(i==1||i==n||i==(n+1)/2|| j==1&&i<(n+1)/2 ||j==n && i>(n+1)/2){
//                 cout<<" * ";
//         }
//         else{
//             cout<<"   ";
//         }
//     }
//     cout<<"\n";
// }
// }
#include <iostream>
using namespace std;
int main()
{
    int n, r;
    cout << "enter a number n:";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == 1 || j == 1 || j == n || i == (n + 1) / 2)
                cout << " * ";

            else
            {
                cout << "   ";
            }
        }
        cout << "   ";

        cout << "   ";
        for (int j = 1; j <= n; j++)
        {
            if (i == j || j == 1 || j == n)
                cout << " * ";

            else
            {
                cout << "   ";
            }
        }
        cout << "     ";
        for (int j = 1; j <= n; j++)
        {
            if (i == n || j == 1 || j == n)
                cout << " * ";

            else
            {
                cout << "   ";
            }
        }
        cout << "     ";
        for (int j = 1; j <= n; j++)
        {
            if (i == 1 || i == (n + 1) / 2 || j == 1 || j == n && i <= n / 2)

                cout << " * ";

            else
            {
                cout << "   ";
            }
        }
        cout << "   ";
        for (int j = 1; j <= n; j++)
        {
            if (i == 1 || i == (n + 1) / 2 || j == 1 || j == n)

                cout << " * ";

            else
            {
                cout << "   ";
            }
        }
        cout << "   ";

        r = n + (n + 1);

        for (int j = 1; j <= r; j++)
        {
            if (i == j || i + j == (2 * n) || j == 1 || j == 2 * n - 1)
                cout << " * ";

            else
            {
                cout << "   ";
            }
        }
        cout << "\n";
    }
}
