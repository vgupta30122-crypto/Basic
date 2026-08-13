#include <iostream>
using namespace std;
int main()
{
    int n;
 cout << "enter a value of n: ";
    cin >> n;
    //phle ye 
     //1111
     //1222
     //1233
     //1234
     for(int i=1;i<=2*n-1;i++){
        for(int j=1;j<=2*n-1;j++){
            int a=i;
            int b=j;
            if(a>n) a=2*n-i;
            if(b>n) b=2*n-j;
            int x=min(a,b);
            // min ko store kra kr print kr diya ko change nhi hoga 
            // x ki jgh n-x+1 krna padega 

            cout<<n-x+1;
        }
        cout<<endl;
    }
     }
//      enter a value of n: 4
// 1111111
// 1222221
// 1233321
// 1234321
// 1233321
// 1222221
// 1111111
// enter a value of n: 4
// 4444444
// 4333334
// 4322234
// 4321234
// 4322234
// 4333334
// 4444444