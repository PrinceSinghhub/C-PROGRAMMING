#include<stdio.h>
int main(){
    int x;
    printf("Enter your Command = ");
    scanf("%d",&x);
    float a,b,c;
    switch(x){
        case 1:
        printf("Enter the value = ");
        scanf("%f",&a);
        b=1.609;
        c=a/b;
        printf("the ans is = %0.3f",c);
        break;

        case 2:
        printf("Enter the value = ");
        scanf("%f",&a);
        b=12;
        c=a/b;
        printf("the ans is = %0.3f",c);
        break;
         
        case 3:
        printf("Enter the value = ");
        scanf("%f",&a);
        b=2.205;
        c=a/b;
        printf("the ans is = %0.3f",c);
        break;

        case 4:
        printf("Enter the value = ");
        scanf("%f",&a);
        b=39.37;
        c=a/b;
        printf("the ans is = %0.3f",c);
        break;
    }
return 0;
}

