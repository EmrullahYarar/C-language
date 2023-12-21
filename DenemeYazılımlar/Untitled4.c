#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct sayilar{
    int a;
};

int main(){

    int a,b,ctr=0;
    char c;

    struct sayilar sy[ctr];

    printf("If you want to add number press y or Y.\n");

        while(1){
            printf("Do you want to add number?\t");
            scanf(" %c", &c);

            if(c == 'y'){
                scanf(" %d", &sy[ctr].a);
                ctr = ctr+1;
            }
            if(c == 'Y'){
                scanf(" %d", &sy[ctr].a);
                ctr = ctr+1;
            }
            else if( (c!= 'y') && (c!= 'Y') ){
                    ctr = ctr-1;
                    break;
            }
        }

        for(b=0; b<=ctr; b++){
            if(sy[b].a % 2 == 0)
                printf("%d is an even number.\n", sy[b].a);
            else
                printf("%d is an odd number.\n", sy[b].a);
        }


    return 0;
}
