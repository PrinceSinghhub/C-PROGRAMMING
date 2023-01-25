#include<stdio.h>
int main(){
    int a=0,b=5;
    do{
        a++;
        if(a==3){
            continue;
        }
        else{
            printf("%d\n",a);
        }
        // a++;  not work propely fs jayiga consol me
    }while(a<b);
    return 0;
}