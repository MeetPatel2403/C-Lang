#include<stdio.h>
void main(){
    char alpha[10];
    printf("enter the alphabet:");
    scanf("%s", &alpha);

    if((alpha >='A' && alpha <='z') || (alpha >='a' && alpha <='z')){
        // aa ma ('')no matlub su thay me natu kariyu to erroer avti hati to time male atle samjavje
        printf("this is alphabets", alpha);
    }
    else{
        printf("this is not alphabets", alpha);
    }
    }