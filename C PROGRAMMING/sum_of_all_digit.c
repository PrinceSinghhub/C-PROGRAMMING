#include<stdio.h>
int main(){
    int a,x,y=0;
    printf("enter your no =");
    scanf("%d",&a);
    while(a>0){
        x=a%10;
        y=y+x;
        a=a/10;
    }
    printf("the addition of all digit is = %d\n",y);
    return 0;
}