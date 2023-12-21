#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(){
        //printf("Hello World!\n");

        //printf("The capital city of Turkey is %s\n", "Ankara");

        // printf("I have been studying at the Cukurova University since %d\n", 1998);

        /*
        while(1){

            int a;

            printf("\nThis program will calculate your age, please enter  your birth year.\n");

            scanf("%d", &a);

            if(2023<a)
                printf("\nError! You could not born in the future! Please enter your birth year.\n");
                continue;

            printf("\nYou are %d years old.\n", 2023-a);
        }
        */
        /*
        while(1){
            float a,b;
            printf("This program will calculate the area of triangle. Please enter the base and height of the triangle\n");
            scanf("%f", &a); scanf("\n%f", &b);
            printf("\nThe area of the triangle is %f.\n", (a*b)/2);
        }
        */
        /*
        int x=0,y=0;
        char yon;
        printf("This program will determine your location on the x and y plane. Use 'W,S,A,D' keys to increase or decrease the location.\n");

            while(1){
                scanf("%c", &yon);
                if( yon== 'W'|| yon== 'w') y+=1;
                else if( yon== 'S'|| yon== 's') y-=1;
                else if( yon== 'D'|| yon== 'd') y+=1;
                else if( yon== 'A'|| yon== 'a') y-=1;
                else continue;

                printf("\nYour X location is %d and your Y location is %d\n", x,y);
            }
        */
        /*
        int x=0,y=0;
        char yon;
        printf("This program will determine your location on the x and y plane. Use 'W,S,A,D' keys to increase or decrease the location.\n");

        while(1){
            scanf("%c", &yon);

            switch(yon){
                case 'W' :
                    y+=1;
                    break;
                case 'w' :
                    y+=1;
                    break;
                case 'S' :
                    y-=1;
                    break;
                case 's' :
                    y-=1;
                    break;
                case 'D' :
                    x+=1;
                    break;
                case 'd' :
                    x+=1;
                    break;
                case 'A' :
                    x-=1;
                    break;
                case 'a' :
                    x-=1;
                    break;
                default :
                printf("\nYour X location is %d and your Y location is %d\n", x,y);

            }
        }
        */


    return 0;
}
