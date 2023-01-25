#include <stdio.h>
int main(){
    printf("\t\t\t\t\t\tWellcome to the CODDEX CODER Callculater\n");
    printf("our function is if you press 1 add 2 sub 3 multiply 4 divide 5 modulus\n");
    int a;
    printf("enter your command for operation = ");
    scanf("%d",&a);
    if (a==1){
        int x,y,z;
        printf("enter the value of x = ");
        scanf("%d",&x);
        printf("enter the value of y = ");
        scanf("%d",&y);
        z=x+y;
        printf("the addition of x+y = %d\n",z);
    }
    else if (a==2){
        int x,y,z;
        printf("enter the value of x = ");
        scanf("%d",&x);
        printf("enter the value of y = ");
        scanf("%d",&y);
        z=x-y;
        printf("the sunstraction of x-y = %d\n",z);

    }
    else if (a==3){
        int x,y,z;
        printf("enter the value of x = ");
        scanf("%d",&x);
        printf("enter the value of y = ");
        scanf("%d",&y);
        z=x*y;
        printf("the multiply of x*y = %d\n",z);
    }
    else if (a==4){
        float x,y,z;
        printf("enter the value of x = ");
        scanf("%f",&x);
        printf("enter the value of y = ");
        scanf("%f",&y);
        z=x/y;
        printf("the division of x/y = %f\n",z);
    }
    else if (a==5){
        int x,y,z;
        printf("enter the value of x = ");
        scanf("%d",&x);
        printf("enter the value of y = ");
        scanf("%d",&y);
        z=x%y;
        printf("the modulse of x*y = %d\n",z);
    }
    return 0;
}