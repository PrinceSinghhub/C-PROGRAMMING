#include <stdio.h>
int main(){
    float physic,chemistry,math,total,percent;
    printf("Enter Marks of Physics = ");
    scanf("%f",&physic);
    printf("Enter Marks of chemistry = ");
    scanf("%f",&chemistry);
    printf("Enter Marks of math = ");
    scanf("%f",&math);
    total=physic+chemistry+math;
    percent=total/3;
    printf("your total marks is %0.2f \n",total);
    printf("your percent is %0.2f \n",percent);
    
    if (percent>90){
        printf("Yor are pass by A+ Grade");
    }
    else if (percent>=75 && percent<=90){
        printf("Yor are pass by A Grade");
    }
    else if (percent>=60 && percent<75){
        printf("Yor are pass by B Grade");
    }
    else if(percent>=45 && percent<60){
        printf("Yor are pass by C Grade");
    }
    else if (percent>=33 && percent<45){
        printf("Yor are pass by D Grade");
    }
    else if (percent<33){
        printf("Yor are fail try again");
    }
    return 0;
}
