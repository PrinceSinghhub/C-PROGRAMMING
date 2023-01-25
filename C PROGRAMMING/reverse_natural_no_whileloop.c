#include<stdio.h>
int main(){
    int a,b=1;
    printf("enter your no = ");
    scanf("%d",&a);
    while(a>=b){
        printf("%d\n",a);
        
        a--;
    }
    return 0;
}