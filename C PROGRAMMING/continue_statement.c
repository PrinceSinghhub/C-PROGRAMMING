#include<stdio.h>
int main(){
    int a;
    printf("enter your no =");
    scanf("%d",&a);
    for(a=0;a<10;a++){
        // printf("%d\n",a);
        if(a==5){
            continue;
        }
        printf("%d\n",a);
        // else{
        //     printf("%d\n",a);
        // }
    }
    return 0;
}