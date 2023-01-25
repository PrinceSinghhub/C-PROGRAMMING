#include<stdio.h>
int main(){
    char p[30];
    printf("Enter String: ");
    gets(p);
    // scanf nhi use kiya becouse space wali string nhi liga ye
    printf("String: %s",p);
return 0;
}