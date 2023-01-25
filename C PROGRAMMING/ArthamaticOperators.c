#include<stdio.h>
int main(){
    int a,b;
    float c;
    //if we make a b is float
    a = 30;
    b =4;
    c = 4.3;

    //for int vale
    printf("a+b = %d\n",a+b);
    printf("a-b = %d\n",a-b);
    printf("a*b = %d\n",a*b);
    printf("a/b = %d\n",a/b);
    printf("a%b = %d\n",a%b);
    
    // for flot vale
    printf("a+c = %f\n",a+c);
    printf("a-c = %f\n",a-c);
    printf("a*c = %f\n",a*c);
    printf("a/c = %f\n",a/c);
    //printf("a%b = %f\n",a%b);  in float point not use %
    
    //without using %f in float
    printf("a+c = %f\n",a+c);
    printf("a-c = %d\n",a-c); // not use %f the not get a result
    printf("a*c = %d\n",a*c);
    printf("a/c = %d\n",a/c);
    //printf("a%c = %d\n",a%c);  in float point not use %
    
    return 0;
    
}
