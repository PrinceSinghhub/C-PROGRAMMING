#include<stdio.h>
int main(){
    int a,x=2;
    // loop statment chek
    int l=0;
    printf("enter your no =");
    scanf("%d",&a);
    while(a>x){
        if(a%x==0){
            l=1;
            break;
        }
    x++; 
    }
    if(l==0){
        printf("%d is a prime no",a);
    }
    else if(l==1){
        printf("%d is not a prime no",a);
    }
    return 0;
}