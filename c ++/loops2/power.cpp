// #include<iostream>
// using namespace std;
// int main(){
//     int a,b;
//     cout<<"enter a number of a and b: ";
//     cin>>a>>b;
//     int power=1;
//     for(int i=1;i<=b;i++){
//         power*=a;
//     }
//     cout<<power;

// }
// enter a number of a and b: 2 4
// 16
#include <iostream>
using namespace std;
int main()
{
    float a;
    int b;
    cout << "enter a number of a and b: ";
    cin >> a >> b;
    float power = 1;
    if (b >= 0)
    {
        for (int i = 1; i <= b; i++)
        {

            power = power * a;
        }
    }

    else
    {
        for (int i = 1; i <= -b; i++)
        {
            power = power * a;
        }
        power = 1 / power;
    }
    cout << power;
}
// enter a number of a and b: 2 -3
// 0.125