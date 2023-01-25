#include <stdio.h>
int main(){
    char c;
    
    printf("Enter your character = ");//65 to 90 A to Z
    scanf("%c",&c);
    if (c<=90 && c>=65){
        printf("yes it is Upper case");
    }
    else{
        printf("not a upper case");
    }
    return 0;
}