#include<stdio.h>
int main(){
    int a,b;
    printf("enter your biggest no = ");
    scanf("%d",&a);
    printf("enter your smallest no = ");
    scanf("%d",&b);
    
    for(a=a;a>=b;a--){
        if(a%2==0){
        continue;
        }
        else{
            printf("%d\n",a);
        }
    }
    return 0;
}