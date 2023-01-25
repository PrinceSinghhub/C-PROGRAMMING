#include<stdio.h>
int main(){
    int a=0,b=0,c=0,d=0;
    for(a=0;a<=3;a++,b++){//loop depenf on last condition a<=3
        printf("%d %d\n",a,b);
    }
    // expersion 3 is optional
    for(c=0;c<=3;){//loop depenf on last condition a<=3
        printf("%d %d\n",c,d);
        c++;d++;
    }
    return 0;
}