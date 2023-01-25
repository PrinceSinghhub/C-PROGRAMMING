#include <stdio.h>
int main(){
    //int to int return int
    int a=10,b=30;
    printf("addition is %d\n",a+b);
    //float to int return float
    float c = 30.6;
    printf("addition is %f\n",a+c);
    //float to float return float
    float d = 60.80;
    printf("addition is %f\n",c+d);

    //int to int 5/2
    printf("the devidion of %d\n",5/2);//ans is 2.5 but return 2 becouse int value 
    //int to int 2/5
    printf("the devidion of %d\n",5/2);//ans is 0.4 but return 0 becouse int value 
    //float to int 5/2
    float g=5.0;
    printf("the devidion of %f\n",g/2);//ans is 2.5  return  2.5 becouse float to int value return float
    //float to int 2/5
    float h=2.0;
    printf("the devidion of %f\n",h/5);//ans is 0.4  return  0.4 becouse float to int value return float

    return 0;


}