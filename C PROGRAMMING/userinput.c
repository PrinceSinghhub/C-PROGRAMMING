#include <stdio.h>
int main() {
    int a;
    float b;
    char c[500];
    printf("Enter you no \n");
    scanf("%d",&a);
    printf("Enter you float no \n");
    scanf("%f",&b);
    printf("Enter you String \n");
    scanf("%s",&c);
    printf("you no is %d \n",a);
    printf("you float no is %f \n",b);
    printf("you string is %s \n",c);
    return 0;
}

// gets()
/*#include <stdio.h>
int main() {
    char c[500];
    printf("Enter your String");
    gets (c);
    printf("%s",c);
    printf("Your String in %s \n",c);
    return 0;
   
}*/

