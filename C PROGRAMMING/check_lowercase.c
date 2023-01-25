#include <stdio.h>
int main(){
    char c;
    
    printf("Enter your character = ");//97 to 122 a to z
    scanf("%c",&c);
    if (c<=122 && c>=97){
        printf("yes it is lower case");
    }
    else{
        printf("not a lower case");
    }
    return 0;
}