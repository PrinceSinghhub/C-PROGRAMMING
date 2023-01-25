#include <stdio.h>
int main(){
    char c;
    printf("Enter your character = ");//97 to 122 a to z and 65 to 90 A TO Z
    scanf("%c",&c);
    if (c<=90 && c>=65){
        printf("yes it is Upper case");
    }
    else if(c<=122 && c>=97){
        printf("yes it is lower case");
    }
    return 0;
}