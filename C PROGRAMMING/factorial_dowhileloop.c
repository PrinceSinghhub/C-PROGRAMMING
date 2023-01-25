#include<stdio.h>
int main(){
    int a=5,b=1,c=1;
    do{
        c=b*c;
        b++;
        printf("the factorial of %d\n",c);//show all methode
    }while(a>=b);
    // printf("the factorial of %d\n",c); show only result
    return 0;
}