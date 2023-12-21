#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define YEAR 2022

int main()
{
    /*
    time_t t;
    unsigned int a,b;
    srand(time(&t));
    a=(rand()%100)+1;
    printf("There is a number between 1 and 100 try to guess the number\n");
        while(a!=b){
            scanf("%d", &b);
            if((b<1)||(b>100))
                continue;
                if(a<b)
                    printf("Your guess is bigger than number\n");
                else if(a>b)
                    printf("Your guess is less than number\n");
                }
    printf("Correct! The number is %d", a);
    /*
    time_t t;
    unsigned int i,x;
    srand(time(&t));

    for(i=1;i<=100;i++){

        x = (rand()%100)+1;
        printf("%u\n", x);
        //printf("%lu\n", time(&t));
    }

    */
    int i,n, a, b ;
    printf("This number is going to find the numbers which can be divedeble with 4 and 7 from 1 to n\n");
    printf("What is the number n?\n");
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        if(i%4==0){
            //printf("%d\n", i);
            a = a + i;
            printf(" %d\n", a);
        }
        else if(i%7==0){
            //printf("  %d\n", i);
            b = b + i;
            printf(" %d\n", b);
        }
    }
    /*
    //fibonacci 1,1,2,3,5,8,13
    int a=1, b=1;
    int n,d,e ;
    printf("This program is going to write the fibonacci series from 1 to n\n");
    printf("What is number n\n");
    scanf("%d", &n);
    printf("%d %d", a, b);
    for(d=0;d<=n;d++){
        e=b ;
        b=a+b ;
        a=e ;
        printf(" %d", b);
    }
    /*
    //1+2+3+4+5=15
    int x,n ;
    int y=0 ;
    printf("This program is going to find the adding of numbers from 0 to n\n");
    printf("What is number n?\n");
    scanf("%d",&n);
    for(x=1;x<=n;x++){
        y=x+y ;
    }
    printf("%d", y);
    /*
    int a ;
    for(a=0;a<=100;a++){
        printf("\n%d", a);
    }
    /*
    int x=0, y=0;
    char yon;
    printf("If you want to go forward or backward use w,s and if you want to go left or right use a,d buttons\n");
    while(1){
        scanf(" %c", &yon);
        switch(yon){
            case 'a':
                x-=1;
                printf("The las position is x: %d, y: %d\n", x, y);
                break;
            case 'd':
                x+=1;
                printf("The las position is x: %d, y: %d\n", x, y);
                break;
            case 'w':
                y+=1;
                printf("The las position is x: %d, y: %d\n", x, y);
                break;
            case 's':
                y-=1;
                printf("The las position is x: %d, y: %d\n", x, y);
                break;
            default:
                exit(1);
        }
        //printf("The las position is x: %d, y: %d\n", x, y);
    }
    /*
    int x=0,y=0 ;
    char yon;
    printf("If you want to go forward or backward use w,s and if you want to go left or right use a,d buttons.\n ");
        while(1){
            scanf(" %c", &yon);
            if(yon=='w') y+=1;
            else if(yon=='s') y-=1;
            else if(yon=='a') x-=1;
            else if(yon=='d') x+=1;
            else break;
        printf("The last position is x:%d, y:%d\n", x, y);
        }

    /*
    float b,h ;
    printf("This program is going to find the area of triangle\n");
    printf("What is the base of triangle?\n");
    scanf("%f", &b);
    printf("What is the heigh of triangle?\n");
    scanf("%f", &h);
    printf("The area of triangle is %f", b*h/2);

    /*
    float y;
    printf("How old are you ?\n");
    scanf("%f", &y);
    printf("Are you really %f you look younger \n", y);

    /*
    char a[]= "Tokyo";
    char b[]= "Beijing";
    char c[]= "Ankara";
    printf("The capital of Turkiye is %s \nThe capital of Japan is %s \nThe capital of China is %s", c,a,b);

    /*
    //Hafta 1 Tekrari
    float a=12.4543 ,b=3.105 ,c=2.5062 ;
    int d=2 ,e=3 ;
    char f[] = "Emrullah" ;

    printf(" %s is making a full course of c programming.\n" , f);
    printf(" A ve B\'nin carpimi %.3f\n A ve C\'nin toplami %f\n A, B ve C\'nin carpimi %.3f\n A, B ve C\'nin toplami %f", a*b, a+c, a*b*c, a+b+c);
    printf("\n D ve E\'nin toplami %d\n D ve E\'nin farki %d", e+d, e-d);


    /*
    char month[] = "October" ;
    printf("%s\n", month );
    strcpy(month, "April");
    printf("%s\n", month );
    //printf("Welcome to the lesson section of full C course\n");
    */
    return 0;
}
