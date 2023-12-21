#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdint.h>
#define MONTH "a"
/*
long int myPower(int x, int n){
    int i, pow=1;
        for(i=1;i<=n;i++){
            pow *=x;
        }
    return pow;
}

int main(){
    int a, b, c;
    printf("Write two number. First one is base number and second one is power of that number.\n");
    scanf(" %d", &a); scanf(" %d", &b);
    for(c=1; c<=b; c++){
        printf("%d over %d = %ld\n", a, c, myPower(a,c));
    }
    return 0;
}
*/
main(){

    int ctr, inner, outer, didSwap, temp;
    int nums[10];
    time_t t;

    srand(time(&t));

        for(ctr=0; ctr<10; ctr++){
            nums[ctr]=(rand()%99)+1;
        }
        puts("\nHere is the list before the sort");
        for(ctr=0; ctr<10; ctr++){
            printf("%d\n", nums[ctr]);
        }
        for(outer=0; outer<9; outer++){
            didSwap=0;
            for(inner=outer; inner<10; inner++){
                if(nums[inner]<nums[outer]){
                    temp = nums[inner];
                    nums[inner] = nums[outer];
                    nums[outer] = temp;
                    didSwap = 1;
                }
            }
            if(didSwap == 0){
                break;
            }
        }
    puts("\nHere is the list after the sort:");
    for(ctr=0; ctr<10; ctr++){
        printf("%d\n", nums[ctr]);
    }
    return 0;
}
