
#include <time.h>
#include <stdio.h>
#include <stdlib.h>

struct randomNums{
    int a;
};

FILE * fptr;

int main(){

int ctr,a;
time_t t;
srand(time(&t));

struct randomNums random[100]; // Array of three structure variables
// Get the information about each book from the user
    for (ctr = 0; ctr < 100; ctr++){
        random[ctr].a=rand()%100+1;
    }
// Remember when typing your filename path to double up the
// backslashes or C will think you are putting in a conversion
// character

fptr = fopen("C:\\users\\Emrullah\\Desktop\\random.txt","w");
// Test to ensure that the file opened

    if (fptr == 0){
        printf("Error--file could not be opened.\n");
        exit (1);
    }

// Print a header line and then loop through and print the info
// to your file, but this time this printout will be in your
// file and not on the screen.

fprintf(fptr,"Here is the random numbers: \n");

    for (ctr = 0; ctr < 100; ctr++){
        fprintf(fptr, " %d\n", random[ctr].a);
    }

fclose(fptr); // Always close your files

printf("\n\tWriting progress is finished\n");

return(0);
}
