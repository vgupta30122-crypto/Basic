#include<iostream>
using namespace std;
int gcd(int a,int b){
    int hcf =1;
    //for(int i=1;i<=min(a,b);i++){
        //loop ko ulta chala do optimized ho jayega 
        for(int i=min(a,b);i>=1;i--){
        if(a%i==0 &&b%i==0){//i is a common factor
            hcf =i;
            break;
        }
    }
    return hcf;
}
int main(){
    int a;
    cout<<"enter 1st number :";
    cin>>a;
    int b;
    cout<<"enter 2nd  number :";
    cin>>b;
    cout<<gcd(a,b);

}
// enter 1st number :24
// enter 2nd  number :60
// 12

// enter 1st number :12
// enter 2nd  number :6
// 6