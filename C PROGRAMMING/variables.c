#include <stdio.h>
int main(){
    int a = 4;
    float b =20.6;
    int s = 10; //case sesentive 
    int S = 30;
    char c[]= "CODEX CODER";
    char d = 'p';//for single string use
    //char c = 'CODEX CODER'; (esa hum nhi likh skti hai c me )
    
    
    printf("%d,%f,%s,%d.%d",a,b,c,s,S);
    printf("%c",d);
    printf("bytes %d",sizeof(a));
    return 0;
}
