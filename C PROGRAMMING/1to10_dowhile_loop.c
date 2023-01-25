#include<stdio.h>
int main(){
    int a,r=0;
    printf("enter your value = ");
    scanf("%d",&a);
    
    do{
        r++;
        printf("the value of a is %d\n",r);
        // a=a+1;
    }while(a>r);
    return 0;
}