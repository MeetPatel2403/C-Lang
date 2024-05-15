#include<stdio.h>
void main()
{
    int age;
    printf("enter the age:\n");
    scanf("%d", &age);
    if(age>=18){
        printf("this persone can voting");
    }
    else{
        printf("this persone is can not votting");
    }
}