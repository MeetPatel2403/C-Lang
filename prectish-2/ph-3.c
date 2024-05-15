#include<stdio.h>
void main(){
    int sub1,sub2,sub3;
    char name;
    printf("enter the name:");
    scanf("%s", &name);
    printf("enter the subject1:");
    scanf("%d", &sub1);
    printf("enter the subject2:");
    scanf("%d", &sub2);
    printf("enter the subject3:");
    scanf("%d", &sub3);
    int total;
    total=sub1+sub2+sub3;
    float percentage;
    percentage=total/0.3; 

        if (percentage>=90){
        printf("gread A");
        }
        else if(percentage>=70 && percentage<=90){
        printf("gread B");
        }
        else if(percentage>=50 && percentage<=70){
        printf("gread C");
        }
        else if(percentage>=30 && percentage<=50){
        printf("gread D");
        }
        else{
        printf("fail");
        }
    }

