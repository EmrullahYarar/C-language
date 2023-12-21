#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int bolum(int a, int b){
    int c;
    c=a/b;
    return c;
}

int kalan(int a, int b){
    int c;
    c=a%b;
    return c;
}

int main(){

    int a,b,c,d;

    printf("This program finds quotient and reminder\n");
    printf("Please enter two numbers\n");

    scanf(" %d", &a); scanf(" %d", &b);

    printf("The quotient of %d/%d is: %d\n", a, b, bolum(a,b));
    printf("The reminder of %d/%d is: %d\n", a, b, kalan(a,b));

    return 0;
}
