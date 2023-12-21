#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <time.h>

/*
Programmer: Emrullah YARAR
Student Number: 2021513064
Date: 3.11.2022
*/

int main()
{
    int i;
    uint8_t dice1, dice2, sum; //unsigned 8 bit integer
    time_t t; // t is used with time function
    srand(time(&t)); // pick a seed using t
    //while(1){
    for(i=1;i<=10;i++){
        dice1 = rand()%6+1 ;
        dice2 = rand()%6+1 ;
        printf("Dice 1: %u, Dice 2: %u \n", dice1, dice2);
        sum = dice1+dice2;
            if(sum<7)
                printf("Sorry you are lost :(\n");
            else if(sum<11)
                printf("Congratulations you win :)\n");
            else{
                printf("Please roll again\n");
                //continue;
            }
        //break;

    }
    return 0;
}
