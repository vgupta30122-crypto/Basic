#include<stdio.h>
int main(){
    int n,i;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the element of array:\n");
    for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }
    int palindrome =1;
     
    for(int i=0;i<n;i++){
        if(arr[i]!=arr[n-i-1]){
        palindrome =0;
        break;   
        }
}
if(palindrome)
    printf("the reverse arry is palindrome :\n");
else{
   printf("the reverse arry is not  palindrome :\n "); 

}      
    }
// Enter the size of array:6
// Enter the element of array:
// 1
// 2
// 3
// 3
// 2
// 1
// the reverse arry is palindrome :
