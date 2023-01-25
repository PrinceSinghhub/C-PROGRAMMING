#include <stdio.h>
#define PI 3.1416
#define n "codex"
int main(){
    int a = 10;
    float b =3.6;
    b=3.90;
    printf("%f\n",b);
    
    //now we use kons key words
    /*const float c=9.5;
    c=10.5;
    printf("%f",c);*/

    //second mehode #defie constant
    //PI = 30.96 //show the error becouse this is constant 
    printf("%f\n",PI);
    //n = "codex coder" //show the error becouse this is constant 
    printf("%s\n",n);

    return 0;
}