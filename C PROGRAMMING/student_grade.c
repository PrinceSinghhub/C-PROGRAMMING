#include <stdio.h>
int main(){
    int marks;
    printf("Enter your marks = ");
    scanf("%d",&marks);
    switch(marks){
        case 100:
        printf("You are pass by A+ Grade");
        break;
        case 90:
        printf("You are pass by A Grade");
        break;
        case 80:
        printf("You are pass by B Grade");
        break;
        case 70:
        printf("You are pass by C Grade");
        break;
        case 60:
        printf("You are pass by D Grade");
        break;
        default:
        printf("Your enter marks is undefined");
        break;
    }
    return 0;
}
    