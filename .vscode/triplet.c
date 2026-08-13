#include<stdio.h>
int main(){
    int arr[8] = {1, 2, 3, 4, 5, 6, 7,8};
     int totaltripletpaires =0;
     int x=12;
    for(int i=0;i<=7;i++){//i=0;i<=7;i++ <= haoi imp 
        for(int j=i+1;j<=7;j++){
            for(int k=j+1;k<=7;k++){
           if(arr[i]+arr[j]+arr[k] ==x) {
            printf("(%d,%d,%d)\n",arr[i],arr[j],arr[k]);
            totaltripletpaires++;
           }
        }
    }
}
    printf("%d",totaltripletpaires);
    return 0;
}

// (1,3,8)
// (1,4,7)
// (1,5,6)
// (2,3,7)
// (2,4,6)
// (3,4,5)
// 6