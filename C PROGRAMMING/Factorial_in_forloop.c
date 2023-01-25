#include<stdio.h>
int main(){
    int x,y=1,z=1;
    
    printf("Enter you number ");
    scanf("%d",&x);
    for(z=1;x>=z;z++){
        y=y*z;
        printf("the factorial is %d\n",y);
    }
    return 0;
}