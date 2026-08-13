  #include<stdio.h>
  int main(){
    // int arr[6]={2,6,7,89,4,5};
    // arr[4]=19;//{2,6,7,89,19,5} ab yr array ho gaya 
    // arr[3]=100;//{2,6,7,100,19,5} ab yr array ho gaya 
    // printf("%d",arr[4]);
    // float arr[5]={2.0,3.12,4.3545,5,6};
    // printf ("%f",arr[3]);
    // char arr[7]={'A','N','W','V','I','%','&'};
    //  printf ("%c", arr[6]);
    int arr[5]={2,3,4,5,6};
    for(int i=0;i<=4;i++){
        int a=i+1;
        printf(" Enter element number :%d\n", i+1);
        scanf("%d",&arr[i]);
    }
      for(int i=0;i<5;i++){

      
        printf("%d ",arr[i]);
      }
    return 0;
  }
//    Enter element number :0
// 1
//  Enter element number :1
// 2
//  Enter element number :2
// 3
//  Enter element number :3
// 4
//  Enter element number :4
// 6
//1 2 3 4 6 array print ho gaya 
//    Enter element number :0
// 3
//  Enter element number :1
// 3
//  Enter element number :2
// 3
//  Enter element number :3
// 3
//  Enter element number :4
// 3
//3 