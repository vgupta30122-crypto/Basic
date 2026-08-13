#include <iostream>
#include<string>
using namespace std;
int main(){
//     string str ="vishal";
//     int count=0;
//     //getline(cin,s); 
//     // count++; 
// int i=0;
// while (str[i]!='\0'){
//     if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')

// count++;
// }
// i++;
//     cout<<count;
 int n;
 cin>>n;
 char str[n];
 for(int i=0;i<n;i++){
    cin>>str[i];
 }
 int i=0;
    int count=0;
while (str[i]!='\0'){
    if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')

count++;
i++;
}
    cout<<count;
 }
 //6
// vishal
// 2