#include<stdio.h>
int main(){
    int a=0;
    for(a=0;a<=5;a++){
        if(a==3){
            continue;
        }
        else if(a==4){
            continue;
        }
        else{
            printf("%d\n",a);
        }
    }
    return 0;
}