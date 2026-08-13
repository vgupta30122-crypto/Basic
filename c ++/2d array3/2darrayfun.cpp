#include <iostream>
#include <vector>
using namespace std;
void change(int a){
    a[0]=10;
}
void chamge2d(int arr[3][3]){
    arr[0][0]=100;
}
int main()
{
    vector<int> v1(3); // 1 2 3
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);