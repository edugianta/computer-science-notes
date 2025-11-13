/*
 * =====================================================================================
 *
 *       Filename:  print-square.c
 *
 *    Description:  Print a square given width and size.
 *  
 *        Version:  1.0
 *        Created:  16/10/2025 04:03:27 p.m.
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
  int size;
  printf("Enter the width/height of your square >>>\n");
  scanf("%d", &size);

  for(int i = 0; i < size + 1; i++) {
    printf("\n");
    for(int j = 0; j < size + 1; j++){
      printf("*");

    }
  }
}
