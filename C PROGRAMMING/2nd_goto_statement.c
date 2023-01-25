#include<stdio.h>
int main(){
    int num;
    for(int i=0;i<8;i++){
        printf("codex coder %d\n",i);
        for(int j=0;j<8;j++){
            printf("Enter the vale of num = ");
            scanf("%d",&num);
            if(num==3){/*essi sirf inner loop hi exit hoga 
            // if i want to exit all loop and also programe then use goto statement*/
            goto end;
                break;
            }
            
        }
    }
    end:
    return 0;
}
