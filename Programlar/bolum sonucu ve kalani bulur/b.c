#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int bolum(int a, int b){
    int c;
    c=a/b;
    return c;
}

float kalan(int a, int b){
    float c;
    c=a%b;
    return c;
}

int main(){

    int a,b,c;

    printf("This program finds quotient and reminder\n");
    printf("Please enter two numbers\n");

    scanf(" %d", &a); scanf(" %d", &b);

    printf("The quotient of %d/%d is: %d\n", a, b, bolum(a,b));
    printf("The reminder of %d/%d is: %f\n", a, b, kalan(a,b));
    printf("\nThe result is: %d.%f\n", bolum(a,b), kalan(a,b));

    return 0;
}
