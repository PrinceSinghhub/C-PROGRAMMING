#include <stdio.h>
int main(){
    int a,b;
    printf("Enter your a = ");
    scanf("%d",&a);
    printf("Enter your b = ");
    scanf("%d",&b);
    if (a>b && b<a){
        printf("ready for go\n");
    }
    else if(b>a && a<b && a>0){
        printf("tack rest\n");
    }
    else if(b>=100 && a<=100){
        printf("codex coder\n");
    }
    else if (a==0 || b==00){
        printf("super\n");
    }
    else if (!(a>-600)&& !(b<-300)){
        printf("pass");
    }
    return 0;
}