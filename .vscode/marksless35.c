#include<stdio.h>
int main(){
    int marks[10] ={95,23,45,56,34,23,90,42,17,31 };
    for (int i=0;i<10;i++){
        if(marks[i]<35){
            printf("%d\n",i);
        }
    }
    }
// 1 out put less than 35 index print
// 4
// 5
// 8
// 9