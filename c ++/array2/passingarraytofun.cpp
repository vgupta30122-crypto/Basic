#include<iostream>
using namespace std;
void display(int a[]){
    for(int i=0;i<4;i++){
        cout<<a[i]<<" ";


    }
    cout<<endl;
    return;


}
void change (int b[]){
    b[0]=100;
    b[1]=80;

}
int main(){
    int arr[5]={ 1 ,2,3,4,5};
    // accssing the element ao the array in another function 
    // updation pass by value / refference
    display(arr);
    change (arr);
    display(arr);

}
// 1 2 3 4 
// 100 80 3 4 