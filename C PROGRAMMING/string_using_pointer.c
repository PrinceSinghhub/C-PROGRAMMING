#include<stdio.h>
int main(){
    // char pr[] = "codex";
    /*if we want to update the value of pr
    the we not update the value on this methode*/
    // pr = "codex coder";
    char *pr = "codex";
    // change the value using pointer
    pr = "codex coder";
    printf("%s",pr);
return 0;
}