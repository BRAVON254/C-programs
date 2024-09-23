// Surface area of a cylinder 
#include<stdio.h>
int main(){
// declaration and initialization
float r,h,SA,pie=3.14;
printf("enter r");
scanf("%f",&r);
printf("enter h");
scanf("%f",&h);
SA=pie*r*r*h*2+2*pie*r*h;
printf("SA of the cylinder is : %f",SA);

}