#include<stdio.h>
int main(){
    int a=0,b=5;

   
    while(b>a){
        a++;
        if(a==3){
            continue;
        }
        else{
            printf("%d\n",a);
        }
    }
    return 0;
}