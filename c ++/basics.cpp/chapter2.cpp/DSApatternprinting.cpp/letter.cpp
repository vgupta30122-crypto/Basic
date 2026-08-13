#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter a number n:";
    cin >> n;
    //r = n + (n + 1);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == 1|| j== 1||j==n ||i==(n+1)/2)
                cout << " * ";

            else
            {
                cout << "   ";
            }
        }
        cout<<"   ";
    

        cout << "   ";

        for (int j = 1; j <= n; j++)
        {
            if (i == j || j == 1|| j == n)
                cout << " * ";

            else
            {
                cout << "   ";
            }
        }
        cout << "     ";

        for (int j = 1; j <= n; j++)
        {
            if (j == 1 || i == n || i == 1)
            {
                cout << " * ";
            }
            else
            {
                cout << "   ";
            }
        }
        cout << "     ";

        for (int j = 1; j <= n; j++)
        {
            if (j == 1 || i == (n + 1) / 2 || j == n)
            {
                cout << " * ";
            }
            else
            {
                cout << "   ";
            }
        }
        cout << "     ";

        for (int j = 1; j <= n; j++)
        {
            if (j == n || j == 1 || i==(n+1)/2 ||i==1)
            {
                cout << " * ";
            }
            else
            {
                cout << "   ";
            }
        }
        cout << "   ";
        for (int j = 1; j <= n; j++)
        {
            if (j == 1|| i==n)
            {
                cout << " * ";
            }
            else
            {
                cout << "   ";
            }
        }
        cout<<"\n";
    }

}
