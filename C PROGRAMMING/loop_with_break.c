#include<stdio.h>
int main(){
    int a=0;
    // with break statmment 
    for(a=0;a<100;++a){
        printf("%d\n",a);
        if (a==5){
            break;
        }
    }
    return 0;
}