/*
 * Write a program to print the corresponding Celisus to  Fahrenheittable
 */

// fahr = cel * 1.8 + 32.0
#include<stdio.h>

int main() {
  float celsius, fahr;
  int lower, upper, step;
  lower   = 0;
  upper   = 300;
  step    = 20;
  celsius = lower;
  while (celsius <= upper) {
    fahr = celsius * 1.80 + 32.0;
    printf ("%3.0f %6.2f\n", celsius, fahr);
    celsius += step;
  }
  return 0;
} 

/*
 *   0  32.00
 * 20  68.00
 * 40 104.00
 * 60 140.00
 * 80 176.00
 * 100 212.00
 * 120 248.00
 * 140 284.00
 * 160 320.00
 * 180 356.00
 * 200 392.00
 * 220 428.00
 * 240 464.00
 * 260 500.00
 * 280 536.00
 * 300 572.00
 */