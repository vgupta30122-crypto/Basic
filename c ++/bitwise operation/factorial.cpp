#include<iostream>
#include<climits>
#include<vector>
using namespace std;
vector<int> factorial(int n){
    vector<int> fact(n+1 ,1);
    int MOD =100000000 +7;
    for(int i=2;i<=n;i++){
        fact[i] =((i%MOD) * (fact[i-1]%MOD))%MOD;
    }
    return fact;

}

int main(){
    vector<int> res =factorial(25);
    for(int i=0;i<res.size();i++){
        cout<<i<<"!=" <<res[i]<<"\n";
    }
    return 0;
}

// output 
// 0!=1
// 1!=1
// 2!=2
// 3!=6
// 4!=24
// 5!=120
// 6!=720
// 7!=5040
// 8!=40320
// 9!=362880
// 10!=3628800
// 11!=39916800
// 12!=79001572
// 13!=27020366
// 14!=78285103
// 15!=74276468
// 16!=88423411
// 17!=3197882
// 18!=57561876
// 19!=93675574
// 20!=73511354
// 21!=43738329
// 22!=62243175
// 23!=31592927
// 24!=58230199
// 25!=55754877