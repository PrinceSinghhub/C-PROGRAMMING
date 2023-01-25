#include<stdio.h>
int main(){
    int num1 = 21;
    float b=36;
    // without typecasting
    printf("%d\n",num1);
    printf("%d\n",b);

    // with typecasting
    printf("%f\n", (float) num1);
    printf("%d\n",(int) b);
    return 0;
}