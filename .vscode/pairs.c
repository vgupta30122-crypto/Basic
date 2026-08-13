#include<stdio.h>
int main(){
    int arr[7] = {1, 2, 8, 4, 5, 6, 7};
     int totalpaires =0;
     int x=12;
    for(int i=0;i<7;i++){
        for(int j=i+1;j<7;j++){
           if(arr[i]+arr[j] ==x) {
            printf("(%d,%d)\n",arr[i],arr[j]);
            totalpaires++;
           }
        }
    }
    printf("%d",totalpaires);
    return 0;
}
// (8,4)
// (5,7)
// 2