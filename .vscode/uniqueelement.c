#include<stdio.h>
#include<stdbool.h>
int main(){
    int arr[7]={1,3,7,6,7,3,1};
    for(int i=0;i<7;i++){
        bool flag =false;
        for(int j=i+1;j<7;j++){
            if(arr[i]==arr[j]){
                flag =true;

            }
        }
        if(flag ==false){
            printf(" the unique element is :%d",arr[i]);
            break;//if multiple unique hai to es break ko hta dena hai 
        }

    }
}
// the unique element is :6