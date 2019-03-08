/*
 * Wirte a program to count blanks, tabs and newlines
 */

#include<stdio.h>

int main() {
  int bCount, tCount, nCount;
  bCount = 0;
  tCount = 0;
  nCount = 0;
  char c;
  while((c = getchar()) != EOF){
    if (c == ' ') {
      bCount++;
    }
    if (c == '\t') {
      tCount++;
    }
    if (c == '\n') {
      nCount++;
    }
  }
  
  printf("blanks = %d, tabs = %d, newlines = %d\n", bCount, tCount, nCount);
  
  return 0;
}

// blanks = 4, tabs = 4, newlines = 6