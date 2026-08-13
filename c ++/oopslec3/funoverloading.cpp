#include <iostream>
using namespace std;

class Demo {
public:
    // Function with one integer parameter
    void display(int a) {
        cout << "Integer: " << a << endl;
    }

    // Function with one double parameter
    void display(double b) {
        cout << "Double: " << b << endl;
    }

    // Function with two integer parameters
    void display(int a, int b) {
        cout << "Sum: " << a + b << endl;
    }
};

int main() {
    Demo obj;

    obj.display(10);        // Calls display(int)
    obj.display(5.5);       // Calls display(double)
    obj.display(20, 30);    // Calls display(int, int)

    return 0;
}
// Integer: 10
// Double: 5.5
// Sum: 50