#include <iostream>
#include <vector>

using namespace std;
int main()
{
    vector<int> v;
    v.push_back(6);  // 1 1
    v.push_back(1);  // 2 2
    v.push_back(4);  // 3 4
    v.push_back(4);  // 4  4
    v.push_back(5);  // 5  8
    v.push_back(7);  // 6  8
    v.push_back(19); //  7  8
    v.push_back(4);  // 8  8
    v.push_back(0);  // 9   16
    v.push_back(4);  //  10  16
    v.push_back(3);  //  11  16
    v.push_back(4);  //  12  16
    v.push_back(3);  //  13  16
    v.push_back(4);  //  14  16
    v.push_back(9);  //  15  16
    v.push_back(4);  //  16  16
    v.push_back(40); // 17   32
    v.push_back(29); // 18  32
    v.push_back(19); // 19    32

    cout << "size of :" << v.size() << endl;
    cout << "capacity of :" << v.capacity() << endl;
  

    //   size of :19
// capacity of :32
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();

     cout << "size of :" << v.size() << endl;
    cout << "capacity of :" << v.capacity() << endl;
}
// size of :19
// capacity of :32
// size of :11
// capacity of :32
