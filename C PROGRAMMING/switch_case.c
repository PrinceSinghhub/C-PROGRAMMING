#include <stdio.h>
int main(){
    int age;
    printf("Enter your age = ");
    scanf("%d",&age);
    switch (age)
    {
    case 18:
    printf("you are vote know\n");
       //break;
    case 21:
    printf("you are vote know and 18+\n");
       //break;
    case 40:
    printf("wellcome vote\n");
       //break;
    default:
    printf("non of these\n");
       // break;
    }
    return 0;
}