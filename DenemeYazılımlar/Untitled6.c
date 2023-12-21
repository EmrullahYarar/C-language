#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string.h>

struct sehirler{
    char ad[25];
    int nufus;
};

int main(){

    struct sehirler s[3]={
        {"Ankara",250},
        {"Hatay",50},
        {"Antep",100},
    };

    struct sehirler *sptr=s;
    int i;

    for(i=0; i<5; i++){
        printf("\n%s %d\n", sptr->ad, sptr->nufus);
        sptr++;
    }

    return 0;
}
