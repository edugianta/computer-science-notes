/*
 * =====================================================================================
 *
 *       Filename:  floyds-triangle.c
 *
 *    Description:  Floyds triangle textbook 3.34
 *  
 *        Version:  1.0
 *        Created:  16/10/2025 04:18:03 p.m.
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
  int count = 1;
  printf("Enter the size of your triangle >>> \n");
  scanf("%d", &size);
  
  for(int i = 0; i < size + 1; i++){
    printf("\n");
    for(int j = 1; j < i + 1; j ++){
      printf("%d ", count);
      count++;
    }
  }



  return 0;
  
}
