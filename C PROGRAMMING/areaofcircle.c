#include<stdio.h>
int main(){
    float r,a;
    printf("Enter your radius = ");
    scanf("%f",&r);
    r=r*r;
    a=3.1416*r;
    printf("%f",a);
    return 0;
}