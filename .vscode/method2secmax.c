#include<stdio.h>
int main(){
    #include<limits.h>
    int n;//max=-1;ye krne pr positive ke liye to valid hai but negative ke liye nhi
    printf("Enter the size of the array:");
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {

        scanf("%d", &arr[i]);
    }
    int secmax = INT_MIN;
    int max =INT_MIN;
    for(int i=0;i<n;i++){
        if(max<arr[i]){
            secmax =max;
            max = arr[i];
        }
    
    else if(secmax<arr[i]){//ye jo else if condition lgi hai due to this reason if array element decending order me ho tb bhi code currect ans dega
        secmax=arr[i];//ye tbhi chalega jb if condition nhi chelegi 
    }

    }
       printf("THE SEC MAXIMUM VALUE IS:%d",secmax);
}  
// Enter the size of the array:6
// 1
// 2
// 3
// 4
// 5
// 6
// THE SEC MAXIMUM VALUE IS:5
//   Enter the size of the array:5
// 5
// 4
// 3
// 2
// 1
// THE SEC MAXIMUM VALUE IS:4  