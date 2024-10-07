//calculate cube
#include <stdio.h>

int main() {
    int num,cube,count=1;
    printf("calculate cube of 5 numbers,enter  a starting number:");
    scanf("%d",&num);
    do{
        cube=(num*num*num);
        printf("cube number %d is %d",num,cube);
        printf("\n");
        count++;
        num++;
    
    }
while(count<6);
    return 0;
}