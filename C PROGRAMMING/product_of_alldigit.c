#include<stdio.h>
int main(){
    int a,x,y=1,b;//b is use to only loop run
    printf("enter your no =");
    scanf("%d",&a);
    for(b=1;a>0;b++){
        x=a%10;
        y=y*x;
        a=a/10;
    }
    printf("the multiplication of all digit is = %d\n",y);
    return 0;
}