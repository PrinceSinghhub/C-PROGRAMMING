#include<stdio.h>
int main(){
    int a=0,b=0;
    while(a<=10){
        b+=a;
        a++;
    }
    printf("the addition of no is = %d",b);
    return 0;
}