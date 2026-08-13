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
        for (int j = m-1; j >=0; j--)
        {
            if(j%2==0){
                    for (int i = 0; i < n; i++)
            {
                cout<<arr1[i][j]<<" ";
            }
            }
            else{ // i=1 3 5
                for (int i = n-1; i>= 0; i--)
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
// 6 7 8  

// 3 6 8 
// 7 5 2 
// 1 4 6 