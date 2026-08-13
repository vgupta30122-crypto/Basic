#include<iostream>

using namespace std;
int count_set_bits(int n){
    return __builtin_popcount(n);
}
int main(){
    cout<<count_set_bits(13)<<"\n";
    return 0;
}
// 3  /// kitne  1 hai eske binary me  1101
