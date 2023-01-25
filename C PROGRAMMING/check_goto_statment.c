#include<stdio.h>
int main(){
    
    pr:
        printf("hello world\n"); //this programe go to infinity loop
        goto codex;
        printf("hello world ji");
        goto pr;
    printf("codex coder\n");
    codex:
    printf("hello world bye bye\n");
    return 0;
    
}