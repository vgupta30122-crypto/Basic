#include <iostream>
using namespace std;
int main()
{
    int n;
 cout << "enter a value of n: ";
    cin >> n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<(char)(j+64)<<" ";
        }
        cout<<endl;
    }
    
}
// enter a value of n: 4
// A B C D 
// A B C D 
// A B C D 
// A B C D 