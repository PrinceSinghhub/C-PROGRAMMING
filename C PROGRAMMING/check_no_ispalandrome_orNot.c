#include <stdio.h>
int main()
{
    int n,f=0,s;
    printf("Enter any number: ");
    scanf("%d", &n);
    s=n;
    while(n>0){
        f=(f*10)+(n%10);
        n=n/10;
    }
    if(s==f){
        printf("Yes this %d is palandrome",f);
    }
    else{
        printf("Not this %d is palandrome",f);
    }
    

    return 0;
}