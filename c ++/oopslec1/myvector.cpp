// #include<iostream>
// using namespace std;
// class Vector{
//     public:
//     int size;
//     int capacity;
//     int *arr;
//     Vector(){
//         size =0;
//         capacity =1;
//         arr =new int [1];
//     }

//     void add(int ele ){
//         if(size ==capacity){
//             capacity*=2;
//             int*arr2 =new int [capacity*2];
//             for(int i=0;i<size;i++){
//                 arr2[i]=arr[i];
//             }
//             arr =arr2;

//         }

//         arr[size++] =ele;
//         // size ++;
//     }
//     void print(){
//         for(int i=0;i<size;i++){
//               cout<<arr[i]<<" ";
//             }
//             cout<<endl;

//     } 
// };
// int main(){
//     Vector v;
//     cout<<v.size<<" "<<v.capacity<<endl;// 0  1 
//     v.add(10);
//     v.print();
//     cout<<v.size<<" "<<v.capacity<<endl;// 1 1  
//     v.add(19);
//     v.print();
//     cout<<v.size<<" "<<v.capacity<<endl;// 2 2
//     v.add(17);
//     v.print();
//     cout<<v.size<<" "<<v.capacity<<endl;// 3 4
// }
// 10 
// 10 19 
// 10 19 17 

// 0 1
// 10 
// 1 1
// 10 19 
// 2 2
// 10 19 17 
// 3 4


#include <iostream>
using namespace std;

class Vector {
public:
    int size;
    int capacity;
    int* arr;

    Vector() {
        size = 0;
        capacity = 1;
        arr = new int[1];
    }

    void add(int ele) {
        if (size == capacity) {
            capacity *= 2;

            int* arr2 = new int[capacity];

            for (int i = 0; i < size; i++) {
                arr2[i] = arr[i];
            }

            arr = arr2;
        }

        arr[size++] = ele;
    }

    void print() {
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    void remove() {
        if (size == 0) {
            cout << "Array is Empty" << endl;
        }

        size--;
    }

    int get(int idx) {
        if (size == 0) {
            cout << "Array is Empty" << endl;
            return -1;
        }

        if (idx >= size || idx < 0) {
            cout << "Invalid Index" << endl;
            return -1;
        }

        return arr[idx];
    }
};

int main() {
    Vector v;

    v.add(10);
    v.add(20);
    v.add(30);

    v.print();

    cout << v.get(1) << endl;

    v.remove();

    v.print();

    return 0;

}

// 10 20 30 
// 20
// 10 20