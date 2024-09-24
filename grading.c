// grading 
#include<stdio.h>
int main(){
    int s1,s2,s3,average;
    
    printf("enter marks for s1");
    scanf("%d",s1);
    
      printf("enter marks for s2");
    scanf("%d",s2);
    
      printf("enter marks for s3");
    scanf("%d",s3);
    
    average=(s1+s2+s3)/3;
    if(average>=70){
        printf("grade is A\n");
    }else if(average>=60){
        printf("grade is\n B");
    }else if(average>=50){
        printf("grade is \n C");
    }else if(average>=40){
        printf("grade is \n D");
    }else if(average<=40){
        printf("grade is \n E(fail)");

    }
}