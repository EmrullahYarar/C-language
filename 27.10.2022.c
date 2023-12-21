#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    time_t t;
    unsigned int i,x,s;
    //signed int a,b,c,;
    srand(time(&t));
    x = (rand()%100)+1;
        while(x!=s){
                printf("Guess the number\n");
                scanf("%u", &s);
            if(x<s)
                printf("My number is less than your guess\n");
            else if(x>s)
                printf("My number is greater than your guess\n");
        }
    printf("Correct! My number was %d\n", x);

    /*
    time_t t;
    unsigned int i,x;
    srand(time(&t));

    for(i=1;i<=10;i++){

        x = (rand()%6)+1 ;
        printf("%u\n", x);
        //printf("%lu\n", time(&t));
    }
    */
    return 0;
}
