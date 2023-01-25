#include<stdio.h>
int main(){
    int a,x,y;
    printf("enter your no =");
    scanf("%d",&a);
    x=a%10;
    do{
        a=a/10;
    }while(a>=10);
    y=x+a;
    printf("the addition of first and last digit  is = %d\n",y);
    return 0;
}