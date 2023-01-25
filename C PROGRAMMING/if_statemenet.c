#include <stdio.h>
int main(){
    int a;
    printf("Enter your age =");
    scanf("%d",&a);
    if(a>=18){
        printf("you can vote now");
    }
    else{
        printf("You are not able to vote now sorry");
    }
    
    return 0;
}