   #include<stdio.h>
   #include<iostream>
   int main(){
    int a = 121;
    int b = 0;
    while(a>b){
        b  = b*10+ a%10;
        a = a/10;
    } 
    if(a==b || a==b/10){
        std::cout<<"Palindrom";
    }
    else{
        std::cout<<"not palindrom";
    }
    return 0;
   }