#include<stdio.h>
int main(){
    int a=5,x,y,z;
    x=0;
    y=1;
    z=0;
    do{
        printf("%d\n",z);
        x=y;
        y=z;
        z=x+y;
        a--;
    }while(a>0);
    return 0;
}