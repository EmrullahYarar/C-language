#include <stdio.h>
#include <stdlib.h>

struct sayilar{
    int x;
};

int main()
{

    int inner, outer, temp, didSwap, a, b, ctr=0, nums[9999];
    char c;

    struct sayilar sy[ctr];

    printf("If you want to add number press y or Y before the adden number.\n");

        while(1){
            printf("Do you want to add number?\t");
            scanf(" %c", &c);

                if(c == 'y'){
                    scanf(" %d", &sy[ctr].x);
                    ctr = ctr+1;
                }
                else if(c == 'Y'){
                    scanf(" %d", &sy[ctr].x);
                    ctr = ctr+1;
                }
                //else if( (c != 'y') && (c!= 'Y') ){
                    //ctr = ctr-1;
                    //break;
                //}
                else{
                    ctr = ctr -1;
                    break;
                }
        }

    printf("\nYou wrote %d numbers and the list of number is:\n", ctr+1 );
        for(a=0; a<=ctr; a++){
            printf(" %d\n", sy[a].x);
        }

    b = ctr;

        for(outer=0; outer<ctr; outer++){
            didSwap=0;
            for(inner=outer; inner<b; inner++){
                if(sy[inner].x<sy[outer].x){
                    temp = sy[inner].x;
                    sy[inner].x = sy[outer].x;
                    sy[outer].x = temp;
                    didSwap = 1;
                }
            }
            if(didSwap == 0){
                break;

            }
        }

    printf("\nThe list of numbers after sort is :\n");
        for(a=0; a<=ctr; a++){
        printf(" %d\n", sy[a].x);
        }

    return 0;
}
