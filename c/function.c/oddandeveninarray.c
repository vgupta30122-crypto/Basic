// #include<stdio.h>
// int main(){
//     int n,i,a[100];
//     int even=0,odd=0;
//     printf("enter the element in array:");
//     scanf("%d",&n);
//     for(int i=0;i<n;i++){
//         scanf("%d",&a[i]);
//      if(a[i]%2==0){
//         even++;
//      }
//      else{
//         odd++;
//      }
    
//      printf("the no of even elements in array are: %d\n",even);
//      printf("the no of odd elements in array are: %d\n",odd);
    
// }
// }
//output 
// enter the element in array:6
// 12 2 3 4 5 6 
// the no of even elements in array are: 1
// the no of odd elements in array are: 0
// the no of even elements in array are: 2
// the no of odd elements in array are: 0
// the no of even elements in array are: 2
// the no of odd elements in array are: 1
// the no of even elements in array are: 3
// the no of odd elements in array are: 1
// the no of even elements in array are: 3
// the no of odd elements in array are: 2
// the no of even elements in array are: 4
// the no of odd elements in array are: 2
#include<stdio.h>
int main(){
    int i ,n,a[100];
    int even=0,odd=0;
    printf("enter the element in array:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
        printf("the no of even elements in array are:%d\n",even);
        printf("the no of odd elements in array are:%d\n",odd);
    }
}
// enter the element in array:6
// 1 2 3 4 5 6 
// the no of even elements in array are:0
// the no of odd elements in array are:1
// the no of even elements in array are:1
// the no of odd elements in array are:1
// the no of even elements in array are:1
// the no of odd elements in array are:2
// the no of even elements in array are:2
// the no of odd elements in array are:2
// the no of even elements in array are:2
// the no of odd elements in array are:3
// the no of even elements in array are:3
// the no of odd elements in array are:3
//same output this is a practice