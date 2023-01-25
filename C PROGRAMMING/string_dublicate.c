#include<stdio.h>
#include<string.h>
int main(){
     char *p = "codex";
     char *p1;
 
     p1=strdup(p);
     printf("original string: %s\n",p);
     printf("dublicate string: %s\n",p1)
     
return 0;
}