// C variables and Data types
#include<stdio.h>
int main(){
    // declaration and  initializing 
  char a;
  char name[]={};
  int age;
  float area;
  double salary;
 printf("enter char");
  scanf("%c",&a);
printf("char is %c",a);

  printf("enter name");
  scanf("%s",&name);
  printf("%s",name);
  
  printf("enter the area");
  scanf("%f",&area);
  printf("%f",area);
  
  printf("enter salary");
  scanf("%lf",&salary);
  printf("%lf",salary);
  /*
  int age =10;//0-9
  float area =2.035;
  double salary =200.50;
  printf("the string is %s\n",name);
  printf("integer is %d\n",age);
  printf("float is %f\n",area);
  printf("double is %lf\n",salary);
    */
    return 0;
}