#include<stdio.h>
int main(){
    float r,h,pi,v;
    printf("Enter your radius = ");
    scanf("%f",&r);
    printf("Enter your height = ");
    scanf("%f",&h);
    r=r*r;
    pi = 3.1416;

    v=pi*r*pi;
    printf("the volume of cylinder is = %f",v);
    return 0;
}

//v=pi*r*r*h