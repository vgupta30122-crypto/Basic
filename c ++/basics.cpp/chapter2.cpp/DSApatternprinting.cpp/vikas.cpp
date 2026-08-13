#include <iostream>
using namespace std;
int main()
{
    int n, r;
    cout << "enter a number n:";
    cin >> n;
    r = n + (n + 1);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= r; j++)
        {
            if (i == j || i + j == (2 * n))
                cout << " * ";

            else
            {
                cout << "   ";
            }
        }

        cout << "   ";

        for (int j = 1; j <= n; j++)
        {
            if (i == 1 || j == (n + 1) / 2 || i == n)
                cout << " * ";

            else
            {
                cout << "   ";
            }
        }
        cout << "   ";
        for (int j = 1; j <= n; j++)
        {
            if (j == 1 || j +i == (n -2)  )
                cout << " * ";

            else
            {
                cout << "   ";
            }
        }
        cout << "";
        for (int j = 1; j <= n; j++)
        {
            if (i == 1 || i == (n + 1) / 2 || j == 1 || j == n)
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
            if (i == 1 || i == n || i == (n + 1) / 2 || j == 1 && i < (n + 1) / 2 || j == n && i > (n + 1) / 2)
                cout << " * ";

            else
            {
                cout << "   ";
            }
        }
        cout << "\n";

        
        

        
    }
}
