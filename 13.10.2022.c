// Lecture 4 in class
// We change position using a, w, d, s keys.
// 13.10.2022
// Two implementations are presented
// 1. if ... else if
// 2. switch.
// Windows users can use getch() function instead of scanf
// getch() does not need enter key press.

#include <stdio.h>
#include <stdlib.h>

int main(){
  int x=0, y=0; // poistion variables
  char yon; // movement direction
  while(1){ 
    scanf(" %c",&yon);
    /*
    if (yon == 'a') x-=1;
    else if (yon == 'd') x +=1;
    else if (yon == 'w') y +=1;
    else if (yon == 's') y -=1;
    else break;
    */
    switch(yon){
    case 'a':
      x-=1;
      break;
    case 'd':
      x +=1;
      break;
    case 'w':
      y +=1;
      break;
    case 's':
      y -=1;
      break;
    default:
      printf("New position is (%d,%d)\n", x, y);
      exit(1);
    }
  }

  
  return 0;
}
