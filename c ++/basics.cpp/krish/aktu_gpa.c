#include<stdio.h>
#include<math.h>
int main(){
    int s1,s2,s3,s4,s5,s6,s7,s8,s9;
   printf("enter the value of subject s1=");
   scanf("%d",&s1);
   printf("enter the value of subject s2=");
   scanf("%d",&s2);
   printf("enter the value of subject s3=");
   scanf("%d",&s3);
   printf("enter the value of subject s4=");
   scanf("%d",&s4);
   printf("enter the value of subject s5=");
   scanf("%d",&s5); 
   printf("enter the value of subject s6=");
   scanf("%d",&s6);
   printf("enter the value of subject s7=");
   scanf("%d",&s7);
   printf("enter the value of subject s8=");
   scanf("%d",&s8);
   printf("enter the value of subject s9=");
   scanf("%d",&s9);
   int Grade1,Grade2,Grade3,Grade4,Grade5,Grade6,Grade7,Grade8,Grade9;
   int cmg1,cmg2,cmg3,cmg4,cmg5, cmg6,cmg7,cmg8,cmg9,c1 , c2,c3,c4,c5,c6,c7,c8,c9 ;
   float totalcmg,totalcredit;
  printf("ENG.chemistry\n");
     if(s1>100){}
          else if(s1>=90 && s1<100){
                                            printf("A+\n");
                                             Grade1=10;
                                        }
                                           else if(s1>=80 && s1<90){
                                            printf("A\n");
                                            Grade1=9;
                                        }
                                           else if(s1>=70 && s1 <80){
                                            printf("B+\n");
                                             Grade1=8;
                                        }
                                           else if(s1>=60 && s1<70){
                                            printf("B\n");
                                             Grade1=7;
                                        }
                                           else if(s1 >=50 && s1<60){
                                            printf("c\n");
                                             Grade1=6;
                                        }
                                           else if(s1>45 && s1<50){
                                            printf("D\n");
                                             Grade1=5;
                                        }
                                           else if(s1>=40 && s1<=45){
                                            printf("E\n");
                                             Grade1=4;
                                        }
                                           else if(s1<40){
                                            printf("Fail\n");
                                             Grade1=00;
                                        }
                                      
                                        printf("Grade for subject s1 is= %d\n",Grade1);
                                        printf("credit of s1=");
                                        scanf("%d",&c1);
                                    cmg1=c1*Grade1;
                      printf("ENG.MATHEMATI-I\n");            
         if(s2>100){}
              else if(s2>=90 && s2<100){
                                            printf("A+\n");
                                             Grade2=10;
                                        }
                                           else if(s2>=80 && s2<90){
                                            printf("A\n");
                                            Grade2=9;
                                        }
                                           else if(s2>=70 && s2 <80){
                                            printf("B+\n");
                                            Grade2=8;
                                        }
                                           else if(s2>=60 && s2<70){
                                            printf("B\n");
                                            Grade2=7;
                                        }
                                           else if(s2>=50 && s2<60){
                                            printf("c\n");
                                            Grade2=6;
                                        }
                                           else if(s2>=45 && s2<50){
                                            printf("D\n");
                                            Grade2=5;
                                        }
                                           else if(s2>=40 && s2<45){
                                            printf("E\n");
                                            Grade2=4;
                                        }
                                           else if(s2<40){
                                            printf("Fail\n");
                                            Grade2=00;
                                        }
                                       
                                        printf("Grade for subject s2 is= %d\n",Grade2);
                                        printf("credit of s2=");
                                        scanf("%d",&c2);
                                     cmg2=c2*Grade2;
            if(s3>100){}
                   else if(s1>=90 && s1<100){
                                            printf("A+\n");
                                            Grade3=10 ;
                                        }
                                           else if(s3>=80 && s3<90){
                                            printf("A\n");
                                            Grade3= 9;
                                        }
                                           else if(s3>=70 && s3 <80){
                                            printf("B+\n");
                                            Grade3= 8;
                                        }
                                           else if(s3>=60 && s3<70){
                                            printf("B\n");
                                            Grade3=7 ;
                                        }
                                           else if(s3>=50 && s3<60){
                                            printf("c\n");
                                            Grade3= 6;
                                        }
                                           else if(s3>=45 && s3<50){
                                            printf("D\n");
                                            Grade3= 5;
                                        }
                                           else if(s3>=40 && s3<=45){
                                            printf("E\n");
                                            Grade3=4 ;
                                        }
                                           else if(s3<40){
                                            printf("Fail\n");
                                            Grade3= 00;
                                        }
                                       
                                         printf("Grade for subject s3 is= %d\n",Grade3);
                                        printf("credit of s3=");
                                        scanf("%d",&c3);
                                     cmg3=c3*Grade3;
                if(s4>100){}
                       else if(s4>=90 && s4<100){
                                            printf("A+\n");
                                            Grade4= 10;
                                        }
                                           else if(s4>=80 && s4<90){
                                            printf("A\n");
                                             Grade4= 9;
                                        }
                                           else if(s4>=70 && s4 <80){
                                            printf("B+\n");
                                             Grade4= 8;
                                        }
                                           else if(s4>=60 && s4<70){
                                            printf("B\n");
                                             Grade4= 7;
                                        }
                                           else if(s4>=50 && s4<60){
                                            printf("c\n");
                                             Grade4= 6;
                                        }
                                           else if(s4>=45 && s4<50){
                                            printf("D\n");
                                             Grade4= 5;
                                        }
                                           else if(s4>=40 && s4<45){
                                            printf("E\n");
                                             Grade4= 4;
                                        }
                                           else if(s4<40){
                                            printf("fail\n");
                                             Grade4= 00;
                                        }
                                      
                                     printf("Grade for subject s4 is= %d\n",Grade4);
                                        printf("credit of s4=");
                                        scanf("%d",&c4);
                                         cmg4=c4*Grade4;
                    if(s5>100){}
                           else if(s5>=90 && s5<100){
                                            printf("A+\n");
                                             Grade5= 10;
                                        }
                                           else if(s5>=80 && s5<90){
                                            printf("A\n");
                                              Grade5= 9;
                                        }
                                           else if(s5>=70 && s5 <80){
                                            printf("B+\n");
                                              Grade5=8 ;
                                        }
                                           else if(s5>=60 && s5<70){
                                            printf("B\n");
                                              Grade5=7 ;
                                        }
                                           else if(s5>=50 && s5<60){
                                            printf("c\n");
                                              Grade5=6 ;
                                        }
                                           else if(s5>=45 && s5<50){
                                            printf("D\n");
                                              Grade5=5 ;
                                        }
                                           else if(s5>=40 && s5<45){
                                            printf("E\n");
                                              Grade5=4 ;
                                        }
                                           else if(s5<40){
                                            printf("Fail\n");
                                              Grade5=00 ;
                                        }
                                       
                                     printf("Grade for subject s5 is= %d\n",Grade5);
                                        printf("credit of s5=");
                                        scanf("%d",&c5);
                                         cmg5=c5*Grade5;
                        if(s6>100){}
                              else if(s6>=90 && s6<100){
                                            printf("A+\n");
                                              Grade6= 10;
                                        }
                                           else if(s6>=80 && s6<90){
                                            printf("A\n");
                                              Grade6= 9;
                                        }
                                           else if(s6>=70 && s6 <80){
                                            printf("B+\n");
                                              Grade6= 8;
                                        }
                                           else if(s6>=60 && s6<70){
                                            printf("B\n");
                                              Grade6= 7;
                                        }
                                           else if(s6>=50 && s6<60){
                                            printf("c\n");
                                              Grade6= 6;
                                        }
                                           else if(s6<50){
                                            printf("Fail\n");
                                              Grade6=00 ;
                                        }
                                       
                                     printf("Grade for subject s6 is= %d\n",Grade6);
                                        printf("credit of s6=");
                                        scanf("%d",&c6);
                                         cmg6=c6*Grade6;
                            if(s7>100){}
                                 else if(s7>=90 && s7<100){
                                            printf("A+\n");
                                              Grade7= 10;
                                        }
                                           else if(s7>=80 && s7<90){
                                            printf("A\n");
                                             Grade7= 9;
                                        }
                                           else if(s7>=70 && s7 <80){
                                            printf("B+\n");
                                             Grade7= 8;
                                        }
                                           else if(s7>=60 && s7<70){
                                            printf("B\n");
                                             Grade7= 7;
                                        }
                                           else if(s7>=50 && s7<60){
                                            printf("c\n");
                                             Grade7= 6;
                                        }
                                           else if( s7<50){
                                            printf("Fail\n");
                                             Grade7= 00;
                                        }
                                       
                                     printf("Grade for subject s7 is= %d\n",Grade7);
                                        printf("credit of s7=");
                                        scanf("%d",&c7);
                                         cmg7=c7*Grade7;
                                if(s8>100){}
                                 else if(s8>=90 && s8<100){
                                            printf("A+\n");
                                             Grade8= 10;
                                        }
                                           else if(s8>=80 && s8<90){
                                            printf("A\n");
                                              Grade8=9 ;
                                        }
                                           else if(s8>=70 && s8 <80){
                                            printf("B+\n");
                                              Grade8= 8;
                                        }
                                           else if(s8>=60 && s8<70){
                                            printf("B\n");
                                              Grade8= 7;
                                        }
                                           else if(s8>=50 && s8<60){
                                            printf("c\n");
                                              Grade8= 6;
                                        }
                                           else if( s8<50){
                                            printf("fail\n");
                                              Grade8= 00;
                                        }
                                           
                                            
                                     printf("Grade for subject s8 is= %d\n",Grade8);
                                        printf("credit of s8=");
                                        scanf("%d",&c8);
                                         cmg8=c8*Grade8;
                                    if(s9>100){}
                                        else if(s9>=90 && s9<100){
                                            printf("A+\n");
                                              Grade9=10 ;
                                        }
                                           else if(s9>=80 && s9<90){
                                            printf("A\n");
                                             Grade9=9 ;
                                        }
                                           else if(s9>=70 && s9 <80){
                                            printf("B+\n");
                                             Grade9= 8;
                                        }
                                           else if(s9>=60 && s9<70){
                                            printf("B\n");
                                             Grade9= 7;
                                        }
                                           else if(s9>=50 && s9<60){
                                            printf("c\n");
                                             Grade9= 6;
                                        }
                                           else if( s9<50){
                                            printf("Fail\n");
                                             Grade9= 00;
                                        }
                                       
                                         printf("Grade for subject s9 is= %d\n",Grade9);
                                        printf("credit of s9=");
                                        scanf("%d",&c9);
                                         cmg9=c9*Grade9;
            totalcmg=cmg1+cmg2+cmg3+cmg4+cmg5+cmg6+cmg7+cmg8+cmg9;
            printf("total of totalcmg=%f\n",totalcmg);
            totalcredit=c1 + c2+c3+c4+c5+c6+c7+c8+c9;
            // printf("total of tatalcmg=%d\n",totalcmg);
            printf("total of totalcredit=%f\n",totalcredit);
          float SGPA;
          SGPA=(totalcmg/totalcredit);
          printf("total SGPA= %f",SGPA);
return 0;
}