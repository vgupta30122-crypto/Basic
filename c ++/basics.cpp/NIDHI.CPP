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
            if (i == j || j== 1||j==n)
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
            if (i == 1 || j == (n + 1) / 2 || i == n)
                cout << " * ";

            else
            {
                cout << "   ";
            }
        }
        cout << "     ";

        for (int j = 1; j <= n; j++)
        {
            if (j == 1 || j == n || i == 1||i==n)
            {
                cout << " *";
            }
            else
            {
                cout << "  ";
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
            if (i == n || i  == 1 || j==(n+1)/2)
            {
                cout << " * ";
            }
            else
            {
                cout << "   ";
            }
        }
        cout << "\n";
    }
}
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//      int  arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
    
//     }
//   int min = arr[0];
//   for(int i=0;i<n;i++){
//     if(min>arr[i]);{
//   min=arr[i];
//     }
//   }
//   cout<<min;
//     }

// 5
// 6 7 8  9 2 
// 2
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//      int  arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for(int i=0;i<n;i++){
//         if(arr[i]%2==0){
//             cout<<"the given number is even: "<<arr[i]<<"\n" ;
//         int even ;
//         int  sum=0;
//         sum =sum+arr[i];
//         cout<<"the number of even is"<<sum;
//         }
//         else{
//              cout<<"the given number is odd: "<<arr[i]<<"\n" ;
//             int odd;
//             int sum=0;
//             sum =sum+arr[i];
//             cout<<"the number of odd is"<<sum;
//         }

//     }
// }