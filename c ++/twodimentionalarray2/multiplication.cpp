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
    int p;
    cout << "enter the rows of second matrix:";
    cin >> p;
    int q;
    cout << "enter the coloms second matrix:";
    cin >> q;

    if (n == p)
    {
        // cout<<" multiplication is possible :"
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

        int arr2[p][q];
        cout << "enter the second matrix element of the array:\n";
        for (int i = 0; i < p; i++)
        {
            for (int j = 0; j < q; j++)
            {
                cin >> arr2[i][j];
            }
        }
        // resltant matrix
        int res[m][q];
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {
                // multyply
                res[i][j] = 0;
                // res[i][j]=a[i][0]*b[0][j]+a[i][1]*b[1][j]+a[i][2]*b[2][j] so on
                for (int k = 0; k < p; k++)
                {
                    res[i][j] += arr1[i][k] * arr2[k][j];
                }
                // cout<<res[i][j]=arr1[i][j]*arr2[i][j];
            }
        }
        // print
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {

                cout << res[i][j]<<" ";
            }
            cout << endl<<"\n";
        }
    }
    else
    { // n!=p
        cout << "the matrixes can not be multyply :";
    }
}
