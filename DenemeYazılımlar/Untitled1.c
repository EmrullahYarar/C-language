#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdint.h>
#define MONTH "a"

                    //************* 7.HAFTA *************//

/*
float triangle_area (float h, float t){
    float a;
    a = h*t/2;
    //printf(" %f\n", a);
    //return(a);
    }

int main(){

    float x,y,z;
    scanf(" %f", &x); scanf(" %f", &y);
    z = ucgen_alan(x,y);
    printf(" \n%.3f", z);

    return(0);
}
*/

                    //************* 9.HAFTA *************//

int main(){
    /*
    char x[25];
    scanf(" %s", &x);
    char *xname;
    xname = x;

    int a=0;
    /*
    char name[]= "Alper";
    char *pname;
    pname = name;
    /*

        while(*xname!='\0'){
            xname++;
            a++;
            printf(" %p", xname);
            //printf(" %c\n", *pname);
        }
    printf(" %d\n", a);
    /*
    int a=0;
    char x[25];
    char *y;
    y = &x;
    scanf(" %s", &x);
        while(*y!='\0'){
            printf(" %c\n", *y);
            y++;
            a++;
        }
    printf(" %d\n", a);
    char b[5] = "elma";
    y = &b;
        while(*y!='\0'){
            printf(" %c\n", *y);
            y++;
        }
    /*
    int x=5, y=10, z=0;
    int *p; int *g; int *w;
    p= &x; g= &y; w= &z;

    p++; *p=2-(*g);

    printf(" %p\n", p);
    printf(" %d\n", *p);
    /*
    char a[5]="elma";
    char *b=&a;
    b++;
    b++;
    b++;
    printf(" %c\n", *b);
    printf(" %p\n", b);
    /*



    return(0);
}
