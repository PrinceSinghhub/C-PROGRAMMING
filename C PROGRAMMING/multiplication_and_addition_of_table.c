#include<stdio.h>
int main(){
    int a=0,b=0,x;
    for(a=1;a<=10;a++){
        printf("%d\n",a*8);
        x=a*8;
        b=b+x;
        printf("the addition of table is = %d\n",b);

    }
    // printf("the addition of table is = %d",b);
    return 0;
    
}