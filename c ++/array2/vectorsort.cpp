#include <iostream>
#include <vector>
#include <algorithm>  // sort ke liye header file hai 
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(9);
    v.push_back(4);
    v.push_back(7);
    v.push_back(8);
    // v.at(2)=234;  // modify ho gya 234
    // cout << v.at(2); //  output 7

    for (int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << " "; // array print 9 4 7 8
    }
    cout << endl;
    // sort
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) <<" ";
    }
    cout << endl;
}// output decending order me hai 
//9 4 7 8 
//4 7 8 9 