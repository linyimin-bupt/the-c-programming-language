/*
 * Verify that the expression getchar() != EOF is 0 or 1.
 */

#include<stdio.h>

int main () {
  int c = 0;
  while (c = getchar() != EOF) {
    printf("c = %d\n", c);
  }
  printf("c = %d at EOF\n", c);  
  return 0;
}

/*
 *  a
 * c = 1
 * c = 1
 * c = 0 at EOF
 */