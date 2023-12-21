#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <time.h>
#include <string.h>

/*
Programmer: Emrullah YARAR
Student Number: 2021513064
Date: 01.12.2022
*/

int cWords(const char *ps){

    unsigned int wc = 0;
        while(*ps != '\0'){
            if(*ps == ' '){
                wc++;
            }
        ps++;
        }
    return ++wc;
}

int main(){

    char *str= "Brezilya'nin yildizi oynasaydi en az on gol daha atarlardi.";

    printf("The sentence consists of %d words\n", cWords(str));

    return 0;
}
