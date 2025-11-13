/*
 * =====================================================================================
 *
 *       Filename:  2d-canvas.c
 *
 *    Description:  2D Canvas drawing with 2d arrays
 *  
 *        Version:  1.0
 *        Created:  23/10/2025 04:39:48 p.m.
 *       Revision:  none
 *       Compiler:  gcc
 *  
 *         Author:  eduardogiantaglia (),
 *   Organization:
 *
 * =====================================================================================
 */

#include <stdio.h>
#define WIDTH 10
#define HEIGHT 10

void main() {
  char canvas[WIDTH][HEIGHT];
  
  for(int row = 0; row < HEIGHT; row++){
    for(int col = 0; col < WIDTH; col++){
      canvas[row][col] = ' '; 
    }
  }
}
