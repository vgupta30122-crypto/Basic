// #include<iostream>
// using namespace std;
// int main(){
//     int n,r;
//     cout<<"enter n:";
//     cin>>n;
//     cout<<"enter r:";
//     cin>>r;
//     int nfact =1;//n!
//     for(int i=2;i<=n;i++){
//         nfact *=i;
//     }
//     int rfact =1;//r!
//     for(int i=2;i<=r;i++){
//         rfact *=i;
    
// }
// int nrfact=1;//nrfact   ----(n-r)!
// for(int i=2;i<=n-r;i++){
//         nrfact *=i;
// }
// int ncr=nfact/(rfact*nrfact);
// cout<<"the ncr of the given number is:"<<ncr;
// }
// enter n:5
// enter r:2
// the ncr of the given number is:10
// #include<iostream>
// using namespace std;
// int fact(int x){
//     int f=1;
//     for(int i=2;i<=x;i++){
//         f*=i;
//     }
//     return f;
// }
// int main(){
//     int n,r;
//     cout<<"enter n:";
//     cin>>n;
//     cout<<"enter r:";
//     cin>>r;
//     int nfact =fact(n);
//     int rfact =fact(r);
//     int nrfact =fact(n-r);
//     int ncr=nfact/(rfact*nrfact);
//     cout<<"the ncr of the given number is:"<<ncr;
// }

// enter n:5
// enter r:2
// the ncr of the given number is:10

// #include<iostream>
// using namespace std;
// int fact(int x){
//     int f=1;
//     for(int i=2;i<=x;i++){
//         f*=i;
//     }
//     return f;
// }
// int main(){
//     int n,r;
//     cout<<"enter n:";
//     cin>>n;
//     cout<<"enter r:";
//     cin>>r;
//     int nfact =fact(n);
//     int nrfact =fact(n-r);
//     int npr=nfact/(nrfact);
//     cout<<"the npr of the given number is:"<<npr;
// }
// enter n:5
// enter r:2
// the npr of the given number is:20
//another way
#include<iostream>
using namespace std;
int fact(int x){
    int f=1;
    for(int i=2;i<=x;i++){
        f*=i;
    }
    return f;

}
int combination(int n,int r){
int ncr =fact(n)/(fact(r)*fact(n-r));
return ncr;

}
int permutation(int n,int r){
    int npr=fact(n)/fact(n-r);
    return npr;
}
int main(){
    int n,r;
    cout<<"enter n:";
    cin>>n;
    cout<<"enter r:";
    cin>>r;
    int ncr=combination(n,r);
    int npr=permutation(n,r);
    cout<<ncr<<endl<<npr;
}
// enter n:6
// enter r:2
// 15
// 30

