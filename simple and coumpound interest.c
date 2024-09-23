// calculation of simple&compound interest
#include<stdio.h>
#include<math.h>
int main(){
    float Principal,rate,time,si,ci;
   int yn; 
    printf("Enter Principal amount:");
    scanf("%f",Principal);
    printf("enter rate:");
    scanf("%f",&rate);
    printf("enter the Time Period in years:");
    scanf("%f",&time);
    //calculating Simple Interest 
    si=(Principal*time*rate)/100;
    printf("Simple Interest:%.2f\n",si);
    // Calculate Compound Interest 
    printf("Enter the number of Times Interest is Compounded per year");
    scanf("%lf",&yn);
    ci=Principal*pow((1+rate/((yn)*100)),(yn*time))-Principal;
    printf("Compound Interest:%.2f\n",ci);
}