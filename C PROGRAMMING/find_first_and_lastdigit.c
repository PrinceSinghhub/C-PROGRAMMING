#include<stdio.h>
int main(){
    int a,x;
    printf("enter your no =");
    scanf("%d",&a);
    x=a%10;
    for(;a>=10;){//10 is setisfied the all no under the range int
        //this progrme only run under the range of int 2147489647 to-2147489647
        a=a/10;
    }
    printf("the first no is = %d\n",a);
    printf("the last no is = %d\n",x);

    return 0;
    
}
