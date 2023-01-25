#include<stdio.h>
int main(){
    int a=0;
    // with break statmment 
    do{
        printf("%d\n",a);
         a++;//e case me 4 tk dega
        if(a==5){
            break;
        }
        // a++; es case me 5 tk dega
    }while(a<10);
    return 0;
}