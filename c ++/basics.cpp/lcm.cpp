#include<iostream>
using namespace std;
int main(){
    int a,b,HCF ,LCM;
    cout<<"enter a number a:";
    cin>>a;
    cout<<"enter a number b:";
    cin>>b;
    for(int i=a;i<=a*b;i=i+a){ 
        if(i%b==0){
            cout<<i;
            break;
        }
//         HCF=a*b/LCM
//        cout <<"hcf of the number "<<HCF;
// }
    }
}


//    else {
//     cout<<"a is not HCF";
//    }
//     LCM =a*b/c;
//     cout<<"LCM is ="<<LCM;
// }
    
