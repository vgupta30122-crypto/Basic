#include<stdio.h>
int main(){
    int x;
    printf("enter the number :");
    scanf("%d",&x);
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    int count =0;
    for (int i = 0; i < 7; i++){
        
        if(arr[i]>x){
            count ++;
        }
    }
 printf("Number of the element greater than %d =  %d",x,count);
    
}
// enter the number :4
// Number of the element greater than 4=  3