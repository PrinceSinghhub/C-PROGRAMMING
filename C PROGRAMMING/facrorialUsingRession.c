#include<stdio.h>
long int multiplyNumbers(int b);
int main() {
    int b;
    printf("Enter a positive integer: ");
    scanf("%d",&b);
    printf("Factorial of %d = %ld", b, multiplyNumbers(b));
    return 0;
}

long int multiplyNumbers(int b) {
    if (b>=1)
        return b*multiplyNumbers(b-1);
    else
        return 1;
}