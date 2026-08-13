#include <iostream>
#include<string>
using namespace std;
int main(){
    string str ="vishal";
    cout<<str<<endl;
    for(int i=0;str[i]!='\0';i++){
        if(i%2==0) str[i]='a'; // 1 3 5
    }
    cout<<str<<endl;
}