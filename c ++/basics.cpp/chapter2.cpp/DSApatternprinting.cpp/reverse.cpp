// #include<iostream>
// using namespace std;
//  int main(){
//     int n;
//     cout<<"enter a number :";
//     cin>>n;
//     int sum =0;
//     while(n>0){
//         int rem=n%10;
//         n=n/10;
//         sum =sum+rem;
//     }
//     cout<<sum;
//     }
#include<iostream>
using namespace std;
 int main(){
    int n;
    cout<<"enter a number n:";
    cin>>n;
    int r=0
    int a=n;
    while(n!=0){
        rem=rem*10;
        int rem=rem+(n%10);
          n=n/10;
        sum =sum+rem;
    }
    cout<<"reverse number :"<<sum;
    }
// #include<stdio.h>
// int main() {
//     //WAP TO PRINT THE SUM OF GIVEN NUMBER AND ITS REVERSE 
//     int n,sum,r;
//     printf("enter the number :");
//     scanf("%d",&n);
//     int original=n;
//     r=0;
//     while(n>0){
//         r=r*10;
//         r=r+(n%10);
//         n=n/10;
//     }
//     printf("The reversed number=%d\n",r);
//     sum = original+r;
//     printf("The sum of the number=%d",sum);
//     return 0;
// }