#include<stdio.h>
int main(){
    int a=50;
    // a*=5
    printf("a*=5 is = %d\n",a*=5);
    // printf("a*=5 is = %d\n",*=a); worng syntax
    
    // a/=5 a=250/5=50
    printf("a/=5 is = %d\n",a/=5);

    // a%=5 a=50%5=0
    printf("a%=5 is = %d\n",a%=5);

    return 0;
}