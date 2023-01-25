#include <stdio.h>
int main()
{
    int n, f=0;
    printf("Enter any number: ");
    scanf("%d", &n);
    while(n>0){
        f=(f*10)+(n%10);
        n=n/10;
    }
    printf("%d",f);

    return 0;
}