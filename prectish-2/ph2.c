#include<stdio.h>
void main(){
    int meet;
    printf("enter your age:");
    scanf("%d",&meet);

    if(meet>=18){
        printf("you are eligibal for vot");
    }
    else{
        printf("you are not eligibal for voting");
    }
    
}