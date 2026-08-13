#include<stdio.h>
int main(){
    //int arr[6] ={2,6,7,9,8,11};
    
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    int sumEven =0;
    int sumOdd =0;
    int count =0;
    for(int i=0;i<7;i++){
        if(i%2==0){
        sumEven += arr[i];
        
    }
    else {
         sumOdd+= arr[i];
    }
} 
int res = sumEven - sumOdd;
printf(" The difference =%d",res);

return 0;
}
// The difference =4