// Example program #1 from Chapter 28 of Absolute Beginner's Guide
// to C, 3rd Edition
// File Chapter28ex1.c
/* The program takes the book info program from chapter 27 and
writes the info to a file named bookinfo.txt. */
//First include the file with the structure definition

#include <stdio.h>
#include <stdlib.h>

struct bookInfo {
char title[40];
char author[25];
float price;
int pages;
};

FILE * fptr;

int main(){

int ctr=0, a;

struct bookInfo books[a]; // Array of three structure variables
// Get the information about each book from the user

printf("How many books do you have?");
scanf(" %d", &a);

    for (ctr = 0; ctr < a; ctr++)
    {
    printf("\nWhat is the name of the book #%d?\n", (ctr+1));
    gets(books[ctr].title);
    puts("Who is the author? ");
    gets(books[ctr].author);
    puts("How much did the book cost? ");
    scanf(" %f", &books[ctr].price);
    puts("How many pages in the book? ");
    scanf(" %d", &books[ctr].pages);
    getchar(); //Clears last newline for next loop
    }
// Remember when typing your filename path to double up the
// backslashes or C will think you are putting in a conversion
// character

fptr = fopen("C:\\users\\Emrullah\\Desktop\\BookInfo.txt","w");
// Test to ensure that the file opened

    if (fptr == 0)
    {
    printf("Error--file could not be opened.\n");
    exit (1);
    }

// Print a header line and then loop through and print the info
// to your file, but this time this printout will be in your
// file and not on the screen.
fprintf(fptr,"Here is the collection of books: \n");

    for (ctr = 0; ctr < a; ctr++)
    {
    fprintf(fptr, "#%d: %s by %s", (ctr+1), books[ctr].title,
    books[ctr].author);
    fprintf(fptr, "\nIt is %d pages and cost $%.2f",
    books[ctr].pages, books[ctr].price);
    fprintf(fptr, "\n\n");
    }

fclose(fptr); // Always close your files

return(0);
}
