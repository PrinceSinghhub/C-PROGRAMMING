#include<stdio.h>
int main(){
    int a,b=1,c=0;
    printf("enter your no = ");
    scanf("%d",&a);
    while(a>=b){
        if(b%2!=0){
            c=c+b;
            printf("%d\n",c);
        }
        b++;
    }
    return 0;
}