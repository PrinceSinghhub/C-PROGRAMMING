#include<stdio.h>
int main(){
    int a=5,b=1,c=1,x=5,y=1;
    
    while(b<=a){
        // c=1; always considered 1 and print 1 to 5
        printf("1st Methode");
        c=b*c;
        b++;
        printf("the factorial of %d\n",c);
    }
   while(x>1){
    //    b=1; not write print 5 to 2
       printf("2st Methode");
       y=y*x;
       x--;
       printf("the factorial of %d\n",y);
   }
    return 0;
}