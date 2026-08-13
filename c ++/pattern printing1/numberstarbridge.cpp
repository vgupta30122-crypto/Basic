#include <iostream>
using namespace std;
int main()
{
    int n;
 cout << "enter a value of n: ";
    cin >> n;
    int m=n-1;
     int nsp=1;//new lines
     for(int i=1;i<=2*n-1;i++){ // 1st line number ke liye
        cout<<i;
     }
     cout<<endl;
    for(int i=1;i<=m;i++){
        //numbers
        int a=1;
        for(int j=1;j<=m+1-i;j++){
            cout<<a;
        a++;
        }
        //spaces 
        for(int k=1;k<=nsp;k++){
            cout<<" ";
            a++;
        }
        nsp+=2;
        //numbers
        for(int j=1;j<=m+1-i;j++){
            cout<<a;
            a++;
        }
        cout<<endl;
    }
}

// enter a value of n: 4
// 1234567
// 123 123
// 12   12
// 1     1
// enter a value of n: 4
// 1234567
// 123 567
// 12   67
// 1     7