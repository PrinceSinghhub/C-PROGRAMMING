#include<stdio.h>
int main(){
    int a=0,b=10;

    // with break statmment 
    while(b>a){
        printf("%d\n",a);
        a++;
        if(a==5){
            break;
            // a++; yha bhi infinity loop 
        }
    }   //a++ go to infinity loop
    return 0;
}
