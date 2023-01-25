#include<stdio.h>
int main(){
    int a=50,b=0,x,y,z;
    x=0;
    y=1;
    z=0;
    for(b=0;a>b;b++){
        printf("%d\n",z);
        x=y;
        y=z;
        z=x+y;
    }
    return 0;
}