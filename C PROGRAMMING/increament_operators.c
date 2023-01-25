#include<stdio.h>
int main(){
    int a=5;
    // increament
    printf("++i is = %d\n",a++);
    printf("++i is = %d\n",a);
    printf("++i is = %d\n",++a);
    printf("++i is = %d\n",a+=1);
    printf("++i is = %d\n",a=a+1);
    
    // increament by i+=
    // a+=10;
    printf("a+=10 is = %d\n",a+=10);
    return 0;
}