#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c,d,e;
    printf("enter the vlaue of number a=");
    scanf("%d", &a);
    printf("enter the vlaue of number b=");
    scanf("%d", &b);
    printf("enter the vlaue of number c=");
    scanf("%d", &c);
    printf("enter the vlaue of number d=");
    scanf("%d", &d);
    printf("enter the vlaue of number e=");
    scanf("%d", &e);

    if(a>b){
        if(a>c){
            if(a>d){
                if(a>e){
            printf("a is dig=%d",a);
            }
            }
            }
    }
    else if(b>c) {
        if(b>d){
            if(b>e){
            printf("b is big=%d",b);
            }
       }
    }
    else if(c>d){
        if(c>e){
        printf("c ia big=%d",c);
        }
        
    }
    else {
        if(d>e)
        {("d is big=%d",d);
        }
        else{
            printf("e is big");
        }
    }
     /*else{
            printf("e is big");
        }*/
    
    
    return 0;
}