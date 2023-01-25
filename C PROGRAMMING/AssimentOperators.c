#include <stdio.h>

int main()
{
    int a,b,c,d;
    a=10;
    a+=5;
    printf("%d\n",a);
    b=20;
    b-=7;
    printf("%d\n",b);
    c=9;
    c*=3;
    printf("%d\n",c);
    d=90;
    d/=2;
    printf("%d\n",d);

    //same vale of x and y
    int x,y;
    x = 30;
    y =4;
    
    printf("x = y = %d\n",x);
    printf("x += y = %d\n",x+=y);
    printf("x -= y = %d\n",x-=y);
    printf("x *= y = %d\n",x*=y);
    printf("x /= y = %d\n",x/=y);

    printf("%d",sizeof(a));




	return 0;
}
