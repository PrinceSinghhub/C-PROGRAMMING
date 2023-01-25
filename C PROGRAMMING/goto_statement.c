#include <stdio.h>
int main() {
    int num;
    for(int i=0;i<8;i++){
        printf("the value of i is  = %d\n",i);
        for(int j=1;j<8;j++){
            printf("enter your no");
            scanf("%d",&num);
            if(num==6){
            goto end;
            }
            }
        }
    
    end:
    printf("bye bye");
    return 0;
}