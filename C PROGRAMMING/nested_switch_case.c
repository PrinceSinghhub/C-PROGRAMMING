#include <stdio.h>
int main(){
    int age ,marks;
    printf("Enter your age = ");
    scanf("%d",&age);
    printf("Enter your marks = ");
    scanf("%d",&marks);
    switch (age)
    {
    case 18:
    printf("you are vote know\n");
        switch (marks){
        case 40:
        printf("your marks is 40\n");
        break;
    }
    break;
    case 21:
    printf("you are vote know and 18+\n");
        switch (marks){
        case 80:
        printf("your marks is 80\n");
        break;
    }
    break;
    case 40:
    printf("wellcome vote\n");
    break;
    
    default:
    printf("non of these\n");
       break;
    }
    return 0;
}