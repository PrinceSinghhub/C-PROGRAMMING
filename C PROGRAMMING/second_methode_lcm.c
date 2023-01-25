#include<stdio.h>
int main(){
    int num1,num2;
    printf("Enter you Num 1  = ");
    scanf("%d",&num1);
    printf("Enter you Num 2  = ");
    scanf("%d",&num2);
    int max;
    if(num1>num2){
        max=num1;
    }
    else if(num2>num1){
        max=num2;
    }
    int k;
    k=max;
    int lcm;
    while(1>0){
        if(k%num1==0 && k%num2==0){
            lcm=k;
            break;
        }
        k+=max;
    }
    printf("your lcm is %d",lcm);
    return 0;
}