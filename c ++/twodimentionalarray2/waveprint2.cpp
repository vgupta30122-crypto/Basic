#include <iostream>
using namespace std;
int main()
{
    int m;
    cout << "enter the rows of 1st matrix:";
    cin >> m;
    int n;
    cout << "enter the coloms 1st matrix:";
    cin >> n;
      int arr1[m][n];
    cout << "enter the  1st matrix element of the array:\n";
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> arr1[i][j];
            }
        }
        cout << endl;

        // wave print 
        for (int i = 0; i < m; i++)
        {
            if(i%2!=0){
                    for (int j = 0; j < n; j++)
            {
                cout<<arr1[i][j]<<" ";
            }
            }
            else{ // i=1 3 5
                for (int j = n-1; j >= 0; j--)
            {     
            cout<<arr1[i][j]<<" ";
            
            }
        }
              cout << endl;
        }
    }
//     enter the rows of 1st matrix:3
// enter the coloms 1st matrix:3
// enter the  1st matrix element of the array:
// 1 2 3 
// 4 5 6 
// 7 8 9

// 3 2 1 
// 4 5 6 
// 9 8 7 