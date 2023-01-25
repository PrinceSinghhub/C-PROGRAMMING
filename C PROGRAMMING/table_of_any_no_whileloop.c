#include<stdio.h>
int main(){
    int a,b=1;
    printf("enter your no = ");
    scanf("%d",&a);
    while(a>=b){
        printf("%d\n",b*2);
        b++;
    }
    return 0;
}
