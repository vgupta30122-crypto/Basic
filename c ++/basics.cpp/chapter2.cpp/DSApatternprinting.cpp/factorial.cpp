#include <iostream>
using namespace std;
int fact(int n)
{

    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int combination(int n, int r)
{
    int ncr = fact(n) / (fact(r) * fact(n - r));
    return ncr;
}
int main()
{
    int n, r;
    cout << "enter a number n:";
    cin >> n;
    cout << "enter a number r:";
    cin >> r;
    int ncr = combination(n, r);
    cout << ncr ;
}