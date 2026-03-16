//decrement operater
//++i(pre increment operater)
//i++(post  increment)
//--i(pre decrement)
//i--(post decrement)
//infinite loop nhi create krna hai 
#include<stdio.h>
int main () {
    for (float i=1.0; i<=10.0; i=i++) {
    printf("%f \n", i);
}
for ( char ch ='a'; ch <='z'; ch++){
    printf("%c \n", ch);
}
return 0;
}