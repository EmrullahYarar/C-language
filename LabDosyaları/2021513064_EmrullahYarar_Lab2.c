// Emrullah_Yarar
// 2021513064
// Date : 06.10.2022
// Write a program that shows the lenght of data types
//char, int, float, short, long, double
#include <stdio.h>

int main()
{
    printf (" char: %lu byte\n integer: %lu byte\n " , sizeof(char), sizeof(int) );
    printf (" double: %lu byte\n float: %lu byte\n" , sizeof(double), sizeof(float) ) ;
    printf (" short: %lu byte\n long: %lu byte\n" , sizeof(short) , sizeof(long) ) ;
    return 0;
}
