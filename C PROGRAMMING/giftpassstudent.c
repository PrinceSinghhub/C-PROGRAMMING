#include <stdio.h>
int main(){
    /*char a[30];
    printf("Enter your subjext =");
    gets(a);
    if(a=="math"){
        printf("Congrates you win 50 rupies");
    }
    else if(a=="science"){
        printf("Congrates you win 50 rupies");
    }
    else if (a=="math science"){
        printf("Congrates you win 500 rupies");
    }
    else{
        printf("invalid data");
    }*/

    char a[100];
    printf("enter your string");
    gets(a);
    printf("%s", a);
    if (a == "math"){
        printf("codex");
    }
    
    return 0;
}