#include<stdio.h>
int main(){
    int p,t;
    printf("Enter your principal rate= ");
    scanf("%d",&p);
    printf("Enter your time = ");
    scanf("%d",&t);
    float r,SI;
    printf("Enter your rate = ");
    scanf("%f",&r);
    SI = (p*r*t)/100;
    printf("Your SI is = %f",SI);
    return 0;
}