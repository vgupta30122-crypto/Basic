// #include<iostream>
// using namespace std;
// int sum(int x,int y){
//     return x+y;
// }
// int main(){
//     cout<<sum(23,-89);
// }
#include <iostream>
using namespace std;

void gun() {
    cout << "Hello PW" << endl;
}

void fun() {
    cout << "Hello CW" << endl;
    gun();
}

void mn() {
    cout << "Hello HW" << endl;
    fun();
}
void tn() {
    cout << "Hello yW" << endl;
    mn();
}


int main() {
    tn();
    return 0;
}
// Hello yW
// Hello HW
// Hello CW
// Hello PW
