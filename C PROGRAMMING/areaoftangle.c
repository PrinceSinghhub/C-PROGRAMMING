#include<stdio.h>
int main(){
    int b,h;
    float a;
    printf("Enter your brith = ");
    scanf("%d",&b);
    printf("Enter your height  = ");
    scanf("%d",&h);
    a=1.0/2*(b*h);
    
    printf("The Area of Rectangle = %f\n",a);
    

    
    return 0;
}