#include<stdio.h>
int main(){
    float c,f;
    printf("Enter ferenhite value = ");
    scanf("%f",&f);
    c = (5.0/9)*(f-32);
    printf("the value of ferenhite to celius is = %f",c);
    return 0;
}
//c = (5.0/9)*(f-32)