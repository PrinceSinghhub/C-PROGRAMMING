#include<stdio.h>
int main(){
    int a,x,y,z;
    printf("enter your no =");
    scanf("%d",&a);
    x=0;
    y=1;
    z=0;
    while(z<a){
        printf("%d\n",z);
        x=y;
        y=z;
        z=x+y;
    }
    return 0;
}