#include<stdio.h>
int main(){
    int a,b=1,c=0;
    printf("enter your no = ");
    scanf("%d",&a);
    while(a>=b){
        c=b+c;
        b++;
        printf("%d\n",c);
    }
    return 0;
}