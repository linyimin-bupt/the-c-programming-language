/*
 * Write a program to copy its input to its output, replacing each string of one or more blanks by a single blank.
 */

#include<stdio.h>

int main() {
  int c, last;
  while ((c = getchar()) != EOF) {
    if (c != ' ') {
      putchar (c);
    } else if (last != ' ') {
      putchar (c);
    }
    last = c;
  }
  return 0;
}

/*
 *
 * a
 * a
 *  
 *  
 * b
 * b
 *                   
 *  
 * z
 * z
 */