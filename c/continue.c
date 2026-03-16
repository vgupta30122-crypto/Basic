#include<stdio.h>
int main () {
   // continue means odd condition hai to even print krega vice versa
   //wap to print add number 1 to 100
    printf("enter the value of =");
    for(int i=0; i<=100;i++)
    {
    
        if (i%2!=0)//even
        {
    continue ; 
    }
    printf("%d ",i);

}
}