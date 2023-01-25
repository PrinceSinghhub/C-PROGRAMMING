#include<stdio.h>
int main(){
    int a,x,y,z;
    printf("enter your no =");
    scanf("%d",&a);
    x=0;
    y=1;
    z=0;
    do{
        printf("%d\n",z);
        x=y;
        y=z;
        z=x+y;
    }while(z<a);
    return 0;
}