#include <stdio.h>
int main(){
    float income,tax;
    tax=0;
    printf("Enter your ammount = ");
    scanf("%f",&income);
    if(income<250000){
        tax+=0;
    }
    if(income>=250000 && income<=500000){
        tax = tax + 0.05*(income-250000);
    }
    if(income>=500000 && income<=1000000){
        tax = tax + 0.20*(income-500000);
    }
    if(income>=1000000){
        tax = tax + 0.30*(income-100000);
    }
    printf("your total tax pay is %0.2f\n",tax);
    return 0;
}