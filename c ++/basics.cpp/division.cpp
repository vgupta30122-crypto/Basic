// #include<iostream>
// using namespace std;
// int main(){
//     int a,b;
//     //cin>>a>>b>>c>>d
//     cout<<"enter number a="; 
//     cin>>a;  
//     cout<<"enter number b=";
//     cin>>b;
//     if((a%2==0 && a%3==0 )&& (b%3==0 && b%2==0 ) || (a%5==0 && b%5==0)) {
//     cout<<"true";
        
//     }
//     else  {
//         cout<<"false";
//     }


// }

// #include<iostream>
//  using namespace std;
// int main(){
//     int age;
//     cin>>age;
//     if((20>=age<=30) && (age%5==0)){
//         cout<<"true";

//     }
//     else {
//        cout<<"false";
 
//     }

  //  }
//   #include<iostream>
//  using namespace std;
//  int main(){
//     for(int i=1;i<=10;i++){
//         if(i*6){

//         cout<<i<<" ";
//         cout<<endl;
//         }
//     }
    
        
//     }
// #include<iostream>
//  using namespace std;
//  int main(){
//     for( int i=1;i<=100;i++){
//         if((i%2==0) || (i%5==0))
//         cout<<i<<" ";
//          cout<<endl;
//     }
//     }
// #include<iostream>
//  using namespace std;
//  int main(){
//     for( int i=1;i<=100;i++){
//         if((i%11==0) && (i%3==0)){
//         cout<<i<<" ";
//          cout<<endl;
//         }
//     }
//     }
#include<iostream>
  using namespace std;
  int main(){
    int n,fact=1;
    cin>>n;
     for( int i=1;i<=n;i++){
     fact =fact*i;
     cout<<fact<<"  ";
     cout<<endl;
     }
  }