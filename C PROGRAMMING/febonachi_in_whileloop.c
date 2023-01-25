#include<stdio.h>
int main(){
    int a=10,x,y,z;
    x=0;
    y=1;
    z=0;
    while(a>0){
        printf("%d\n",z);
        x=y;
        y=z;
        z=x+y;
        a--;
    }
    return 0;
}