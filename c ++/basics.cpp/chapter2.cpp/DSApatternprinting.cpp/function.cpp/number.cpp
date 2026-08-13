// #include<iostream>
// using namespace std;
// int  sum(int n){
//     int sum =0;
//     for(int i=1; i<=n; i++){
//     int sum =sum+i;
//   }
//   return sum;
// }
// int main(){
//   int n;
//   cin>>n;
//   cout<<sum(n);
// }

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
int main()
{
  int n;
  cout << "enter a number:";
  cin >> n;
  cout << fact (n);
}
