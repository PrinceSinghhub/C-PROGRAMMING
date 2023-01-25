#include <stdio.h>
int main(){
    int a = 10;
    float b =3.6;
    printf("%d\n",a);//%d formate specifire
    printf("%f\n",b);//%f formate specificer
    
    //if we print only 4 decimal value
    printf("%.4f\n",b);
    
    //if we want to print no gap og our outout in front
    printf("%0.4f\n",b);
    // our output len is 5 under put gap 5 no change  or no gao 
    printf("%2.4f\n",b);
    printf("%4.4f\n",b);
    printf("%3.4f\n",b);

    //if we want to print gap then
    printf("%10.4f\n",b);// our len is 5 and pit ln 10 tack a 5 gap 
    printf("%5.4f\n",b);// becouse len is 5 thats why no gap

    //if we want to print -gap then
    printf("%-10.4f codex\n",b);


    return 0;


}
