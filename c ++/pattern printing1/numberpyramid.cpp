#include <iostream>
using namespace std;
int main()
{
    int n;
 cout << "enter a value of n: ";
    cin >> n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int k=1;k<=i;k++){
            cout<<k;
        }
        for(int q=i-1;q>=1;q--){
            cout<<q;
        }
        cout<<endl;
        }
    }
// enter a value of n: 5
//     1
//    121
//   12321
//  1234321
// 123454321
// dry run
// Visualization Table
// i	Spaces	Ascending (k)	Descending (q)	Row Output
// 1	3	1	-	1
// 2	2	12	1	121
// 3	1	123	21	12321
// 4	0	1234	321	1234321