#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


int main(){
    int a, y, b, x, q=0, w=0, e=0;
    printf("\nThis program calculates the score of soccer team");
    //printf("\nIf you want to calculate press 1\n"); scanf(" %d", &x);

    while(1){
        printf("\nKac gol attiniz: "); scanf(" %d", &a);
        printf("\nKac gol yediniz: "); scanf(" %d", &y);

            if(a>y)
                q+3;

            if else(a<y)
                w+0;

            if else(a==y){
                e+1;
            }
            printf("\nDevam etmek icin 1\'e basiniz.");
            scanf(" %d", &x);

            if(x==1)
                continue;
            else{
                printf("\nPuan: %d", q+w+e);
                break;
            }

    }
    /*
    float a,s, b, h, t, r, c;
    char x;
    printf("\nThis program is calculating of the area of circle, triangle or square. Type 'c', 't' or 's' to calculate.");
    printf("\nWhat are you going to calculate: "); scanf("%c", &x);

        switch(x){
            case 'c':
                printf("\nWhat is the radius of circle?\t"); scanf("%f", &r);
                c = 2*3.14*r*r;
                printf("\nThe area of circle is: %.3f", c);
                break;
            case 't':
                printf("\nWhat is the base of triangle?\t"); scanf("%f", &b);
                printf("\nWhat is the height of triangle?\t"); scanf("%f", &h);
                t = b*h/2;
                printf("\nThe area of triangle is: %.3f", t);
                break;
            case 's':
                printf("\nWhat is the edge of square?\t"); scanf("%f", &a);
                s = a*a;
                printf("\nThe area of circle is: %.3f", s);
                break;

        }
    /*
    int n,b=1,i;
    printf("\nWhat is n:"); scanf("%d", &n);

    for(i=1; i<=n; i++){
        b=b*i;
    }
    printf("%d", b);

    /*
    float a,b,c,d;
    printf("This program is going to find your average grades and your situation of lesson\n");
    printf("What is your midterm exam grade: "); scanf("%f", &a);
    printf("\nWhat is your final exam grade: "); scanf("%f", &b);
    printf("\nWhat is your performance grade: "); scanf("%f", &c);
    d = (a*0.4)+(b*0.5)+(c*0.1);
        if(d>50)
            printf("\nCongratulations you passed the term. Your grade is: %.3f", d);
        else if(d<50)
            printf("\nYou failed! You couldn\'t pass the term. Your grade is: %.3f", d);


    /* *************************************************************************************************
    int a,b,t;
    char asd;
    printf("This program is going to compute four transactions for a and b input\n");
    printf("What is number 1:"); scanf(" %d", &a);
    printf("\nWhich transactions are you going to do '+', '-', '*' or '/'?\n");
    scanf("%s", &asd);
    printf("\nWhat is number 2:"); scanf(" %d", &b);


        switch(asd){

            case'+':
                t=a+b;
                printf("A+B is equal to: %d", t);
                break;
            case'-':
                t=a-b;
                printf("A-B is equal to: %d", t);
                break;
            case'*':
                t=a*b; printf("A*B is equal to: %d", t);
                break;
            case'/':
                t=a/b;
                printf("A/B is equal to: %d", t);
                break;
        }

    /* **************************************************************************************************
    int a,b,c;
    printf("Write three numbers to compare they\n");

    printf("Number 1 is:"); scanf(" %d", &a);
    printf("\nNumber 2 is:"); scanf(" %d", &b);
    printf("\nNumber 3 is:"); scanf(" %d", &c);

    if(a<b && a<c && b<c)
        printf(" %d<%d<%d", a,b,c);

    else if(b<a && b<c && a<b)
        printf(" %d<%d<%d", b,a,c);

    else if(c<a && c<b && a<b)
        printf(" %d<%d<%d", c,a,b);

    else if(a<b && a<c && c<b)
        printf(" %d<%d<%d", a,c,b);

    else if(b<a && b<c && c<a)
        printf(" %d<%d<%d", b,c,a);

    else if(c<a && c<b && b<a)
        printf("%d<%d<%d", c,b,a);

    else if(b==a && b==c && a==c)
        printf("\n%d=%d=%d", b,a,b);

    /*
    int i,a;
    time_t t;
    srand(time(&t));
        for(i=1; i<=100; i++){
            a=rand()%100+1;
            printf("%d\t", a);
        }
    /*
    unsigned int a;
    float b;
    time_t t;
    srand(time(&t));
    a=rand()%100+1;
    printf("Guess any number between 1 and 100\n");
        while(a!=b){
            scanf(" %f", &b);

                    if(a<b)
                        printf("Your number is bigger\n");
                    else if(a>b)
                        printf("Your number is less\n");
            }
        printf("Congratulations your guess is right! It was: %u\n", a);

    /*
    int a,b;
    printf("Write the order of day for any choosen number\n");

        while(1){
            scanf(" %d", &a);
            b=a%7;
                switch(b){
                case(1):
                    printf("Monday\n");
                    break;
                case(2):
                    printf("Thursday\n");
                    break;
                case(3):
                    printf("Wednesday\n");
                    break;
                case(4):
                    printf("Tuesday\n");
                    break;
                case(5):
                    printf("Friday\n");
                    break;
                case(6):
                    printf("Saturday\n");
                    break;
                case(0):
                    printf("Sunday\n");
                    break;
                }
        }
    */
    return(0);
}
