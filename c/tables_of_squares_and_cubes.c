/*
 * =====================================================================================
 *
 *       Filename:  tables_of_squares_and_cubes.c
 *
 *    Description:  Outputs table of squares and cubes of numbers from 0 to 10.  
 *  
 *        Version:  1.0
 *        Created:  09/10/2025 04:54:13 p.m.
 *       Revision:  none
 *       Compiler:  gcc
 *  
 *         Author:  eduardogiantaglia (),
 *   Organization:
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <math.h>

int main() {
  double i_squared;
  double i_cubed;
  printf("number \t square \t cube\n");
  for(int i = 0; i < 10; i++){
    i_squared = pow(i,2);
    i_cubed = pow(i,3);

    printf("%d \t %lf \t \%lf\n", i, i_squared, i_cubed);
  }
  return 0;
}
