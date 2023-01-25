#include <stdio.h>
int main(){
    int a,b;
    printf("Enter your a = ");
    scanf("%d",&a);
    printf("Enter your b = ");
    scanf("%d",&b);
    if (a>b){
        printf("ready for go\n");
    }
    else if(b>a){
        printf("tack rest\n");
    }

    if (a=50){/*hum koi si bhi non zeros value daaal de ye run hoga
              becouse in c non zero value return true aleays thats why run this line */ 
         printf("running");
    }
    return 0;
}

