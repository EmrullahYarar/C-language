#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int L,S;
    scanf(" %d", &L); scanf(" %d", &S);

        for(int c=1; c<=L; c++){
            for(int d=1; d<=S; d++){
                printf("*");
            }
            printf("\n");
        }
    return 0;
}
