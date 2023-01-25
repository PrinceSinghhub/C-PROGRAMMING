#include<stdio.h>
int main(){
    int i;
    i=10;
    while(i<21){
        printf("No is %d\n",i);
        i++;//i++ means i+=1 = i=i+1
    }

    // second methode
    while(i<=20){
        if (i>10){
            printf("%d",i);
        }
    i++;
    }
    return 0;
}