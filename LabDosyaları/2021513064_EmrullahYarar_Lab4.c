#include <stdio.h>
/*
Emrullah Yarar
2021513064
Lab_4
The aim of this program is printing a square to the display
*/

int main()
{
    int L,S ;
    int i,j;

    printf("Please input the short edge\n");
    scanf("%d", &S);
    printf("Please input the long edge\n");
    scanf("%d", &L);
    printf("\n");

    for(i=1;i<=S;i++){
        for(j=1;j<=L;j++){
            if((i==1)||(i==S))
                if(j<L)
                printf("*");
            else
                printf("*\n");
         else
            if(j==1)
            printf("*");
         else if(j==L)
            printf("*\n");
         else
            printf(" ");
        }
    }
    return 0;
}
