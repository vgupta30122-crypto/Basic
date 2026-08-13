#include<iostream>

using namespace std;
int main(){
    int x=90;
    int temp;
    while(x!=0){
        temp =x;
        x=x&(x-1);

    }
    cout<<temp<<"\n";
    return 0;
}
// 64  n se just smaller power hai ye 