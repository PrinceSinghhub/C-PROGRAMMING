#include<stdio.h>
#include<math.h>
int main(){
    int a,b; //this is a type deceleration
    a = 10; //this is a type deceleration
    b = 30;
    printf("%d\n",a+b);
    printf("%d\n",a-b);
    printf("%d\n",a*b);
    float c = 30;

    printf("%f\n",a/c);
    printf("%d\n",a%b);

    int x = 3,y=2,z;
    z=x*y;//write
    //a*b=z;//wrong
    printf("%d\n",z);
    printf("%d\n",x%y);
    printf("%d\n",-x%y);
    printf("%d\n",-x%-y);
    printf("%d\n",x%-y);//becouse rule hai jo numenotor ka sign hoga whi reminder bhi liga
    printf("the power of x and y in %f\n",pow(x,y));
    printf("the power of x and y in %d\n",pow(x,y));/*%d me not return anything ans 0 becouse ye ek 
                                                    doublle value deta hai 
                                                    thats whys we use %f*/
    return 0;
}