#include <stdio.h>

int main() {
    int a,b=0;
    printf("Enter you no ");
    scanf("%d",&a);
    while(a>0 || a<0){
        printf("%d\n",a);
        a=a/10;
        b++;
    }
    
    printf("the no of digit is %d",b);
    return 0;
    
}