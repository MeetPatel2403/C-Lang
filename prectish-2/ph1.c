#include<stdio.h>
void main(){
    int num;
    printf("enter the number:");
    scanf("%d",&num);

    if(num%2==0){
        printf("this number is odd");
    }
    else{
        printf("this number is even");
    }
}