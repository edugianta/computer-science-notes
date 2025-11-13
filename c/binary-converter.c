/*
 * =====================================================================================
 *
 *       Filename:  binary-converter.c
 *
 *    Description:  Binary to denary:
 *  
 *        Version:  1.0
 *        Created:  16/10/2025 04:24:30 p.m.
 *       Revision:  none
 *       Compiler:  gcc
 *  
 *         Author:  eduardogiantaglia (),
 *   Organization:
 *
 * =====================================================================================
 */

#include <stdio.h>

int main() {

  int binary;
  int base = 1;
  int decimal = 0;
  printf("Input the binary number >>>\n");
  scanf("%d", &binary);

  while(binary > 0 ) {
    int rightmostDigit = binary % 10;
    decimal += rightmostDigit * base; 
    base = base * 2;
    binary = binary / 10;
  }

  printf("The value of your binary is %d", decimal);
}
