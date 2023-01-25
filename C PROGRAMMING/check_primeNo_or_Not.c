#include<stdio.h>
int main(){
    int a,i,c=0;
    printf("enter your no =");
    scanf("%d",&a);
    if(a>2){
        for(i=2;i<a;i++){
            if(a%i==0){
                c=1;
                break;
            }
        }
    }
    
    if(a<2){
        printf("enter a valid no");
    }
    else if(c==0){
        printf("the is a prime no");
    }
    else if(c==1){
        printf("not a prime no");
    }
    
    return 0;
    }

   
    
    