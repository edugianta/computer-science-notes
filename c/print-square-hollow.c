/*
 * =====================================================================================
 *
 *       Filename:  print-square-hollow.c
 *
 *    Description:  Prints a square, hollow, given input size
 *  
 *        Version:  1.0
 *        Created:  16/10/2025 04:05:54 p.m.
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
  int size = 0;
  printf("Input the size of your hollow square >>>");
  scanf("%d", &size);

  for(int i = 0; i < size; i++){
    printf("\n");
    for(int j = 0; j < size; j++){
      if ((i == 0) || (i == size-1)) {
        // We are in the outer first line or the last line
        printf("*");
      } else {
        if ((j == 0) || (j == size-1)) {
        // Detect if we are are at a border of the square
        printf("*");
        } else {
          printf(" ");
        }

      }


      

    }
  }
}
