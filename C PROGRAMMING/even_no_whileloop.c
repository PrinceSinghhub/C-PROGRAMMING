#include<stdio.h>
int main(){
    int a,b=1;
    printf("enter your no = ");
    scanf("%d",&a);
    while(a>=b){
        if(b%2==0){
            printf("%d\n",b);
        }
        b++;
    }
    return 0;
}