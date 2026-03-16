/*#include<stdio.h>
int main () {
    //pre post inc and dec
    int x=4,y=3,z;
    //y=--x;
    z=--x -y;
    printf("\n%d%d%d",x,y,z); 
}*/
/*#include<stdio.h>
int main () {
    int x=4,y=0,z;
    while (x>=0){
      x--;
      y++;
      if(x==y)
      continue;
      else 
      printf("\n%d %d",x,y);
    }
}*/
#include<stdio.h>
int main () {
    int x=4,y=0,z;
    while( x>=0){
        if(x==y)
        break;
        else
        printf("\n%d%d",x,y);
        x--;
        y++;
    }
}
