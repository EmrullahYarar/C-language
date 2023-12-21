#include <stdio.h>
#include <math.h>
#define YEAR 2022

int main()
{


    float a,b ;
    printf("What is the base of triangle? \n");
    scanf("%f", &a);
    printf("What is the height of triangle? \n");
    scanf("%f", &b);
    printf("The area of the triangle is %f \n", (a*b)/2);

    /*
    int y;
    printf("What is your birth year? \n");
    scanf("%d", &y) ;
    printf("Are you really %d you look younger \n", YEAR-y);

    /*
    float a ;
    printf("When were you born ? \n");
    scanf("%f", &a) ;
    printf("%.0f \n", a) ;

    float b; ;
    printf("How old are you ? \n");
    scanf("%f", &b) ;
    printf("%.0f \n", b) ;

    /*
    float y;
    printf("How old are you ?\n");
    scanf("f", &y);
    printf("Are you really %f you look younger \n", y);

    /*
    int y ;
    printf (" Are you older than 18 ? \n") ;
    scanf ("%d" , &y) ;
    printf ("%d", y) ;

    /*

    char a[] ="Ankara" ;
    char b[] ="Ottowa" ;
    char c[] ="Addis Ababa" ;
    printf (" Capital of Turkiye = %s \n Capital of Kanada = %s \n Capital of Etiopia = %s \n", a, b, c);

    */

    return 0;

}
