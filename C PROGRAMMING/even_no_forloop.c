#include<stdio.h>
int main(){
    int a,b=1;
    //first methode 


    printf("enter your no = ");
    scanf("%d",&a);
    for(a=a;a>=b;a--){
        if(a%2==0){
            printf("%d\n",a);
        }
    }


    //second methode
    printf("enter your no = ");
    scanf("%d",&a);
    for(b=b;b<=a;b++){
        if(b%2==0){
            printf("%d\n",b);
        }
    }
    return 0;
}