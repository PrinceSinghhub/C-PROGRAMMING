#include<stdio.h>
#include<string.h>
int main(){
      char p[] = "codex";
      char p1[] = "CODER";
      char c[30];
      char d[30];
      printf("Concatination p in p2: %s\n",strcat(p,p1));
      printf("len of p: %d\n",strlen(p));
      printf("len of p1: %d\n",strlen(p1));
      printf("reverse of p: %s\n",strrev(p));
      printf("reverse of p1: %s\n",strrev(p1));
      printf("copy string p in c: %s\n",strcpy(c,p));
      printf("copied string in c: %s\n",c);
      printf("copy string p1 in d: %s\n",strcpy(d,p1));
      printf("copied string in d: %s\n",d);
      printf("copy string p in c: %s\n",strcpy(c,p));
      printf("compare two string p and p1: %d\n",strcmp(p,p1));
    printf("convert uppercase: %s\n",strupr(p));
    printf("convert lowercase: %s\n",strlwr(p1));


return 0;
}