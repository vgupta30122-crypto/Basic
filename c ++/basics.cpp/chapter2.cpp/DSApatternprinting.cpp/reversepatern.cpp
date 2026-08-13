#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter a number:";
    cin >> n;
    int reverse = 0;
    while (n != 0)
    {
        reverse = reverse * 10 + (n % 10);
        n =n/10;
        continue;
    }
    cout << reverse<< "\n"<<"not a pelindrom number";
    
}


    //   break; 
      //cout<<"pelindrom number";
      
// enter a number:432
// 234