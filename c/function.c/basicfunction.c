/*#include<stdio.h>
void england(){
    printf("you are in England\n");
    return;

}
void india(){
    printf("you are in india\n");
        void australia();//callingaustralia
        australia();
    return;
}
  void australia(){
    printf("you are in australia\n");
    england();//calling england
        return;
}
int main(){
    india();//calling india

    return 0;
}*/
//jise call kiya ja raha hai vo uper hona chaghiye 
//ye neche se upper chalata hai
//but but but but but
//but ni     useless 
#include<stdio.h>
int main(){
    void india();
    india();//calling india
 return 0;
}
void india(){
    printf("you are in india\n");
        void australia();//callingaustralia
        australia();
    return;
}
void australia(){
    printf("you are in australia\n");
    void england();
    england();//calling england
        return;
}
void england(){
    printf("you are in England\n");
    return;

}

  
