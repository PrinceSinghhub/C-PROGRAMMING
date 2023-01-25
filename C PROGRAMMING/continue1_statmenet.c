#include<stdio.h>
int main(){
    int a=0,age;
    printf("enter your age =");
    scanf("%d",&age);
    for(a=0;a<10;a++){
        printf("%d\n",a);
        if(age<10){
            continue;
        }
        // printf("%d\n",a);
        printf("Hello");
        // else{
        //     printf("%d\n",a);
        }
    
    return 0;
}