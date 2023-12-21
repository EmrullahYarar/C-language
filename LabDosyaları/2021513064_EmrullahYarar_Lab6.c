#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <time.h>
#include <string.h>

/*
Programmer: Emrullah YARAR
Student Number: 2021513064
Date: 24.11.2022
*/

long int myPower(int x, int n){
    int i, pow=1;
        for(i=1;i<=n;i++){
            pow *=x;
        }
    return pow;
}

int main(){
    int N=2, j;
    for(j=1; j<=10;j++){
        printf("%d over %d = %ld\n", N, j, myPower(N,j));
    }
    return 0;
}
