#include <stdio.h>
int main(){
    int a;
    printf("Enter your age =");
    scanf("%d",&a);
    if(a>=18){
        printf("you can vote now");
    }
    else if(a<=10){
        printf("you are child now");
    }
    else if (a>10 && a<18){
        printf("wait for few time ");
    }
    else{
        printf("invalid data");
    }
    
    return 0;
}