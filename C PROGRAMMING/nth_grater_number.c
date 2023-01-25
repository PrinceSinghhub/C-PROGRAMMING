#include <stdio.h>
int main(){
    int a,b,c,d;
    printf("Enter your no a = ");
    scanf("%d",&a);
    printf("Enter your no b = ");
    scanf("%d",&b);
    printf("Enter your no c = ");
    scanf("%d",&c);
    printf("Enter your no d = ");
    scanf("%d",&d);
    if (a>b && a>c && a>d){
        printf("the grater no is %d",a);
    }
    else if(b>a && a>c && a>d){
        printf("the grater no is %d",b);
    }
    else if(c>a && c>b && c>d){
        printf("the grater no is %d",c);
    }
    else if(d>a && d>b && d>c){
        printf("the grater no is %d",d);
    }
    return 0;
}
