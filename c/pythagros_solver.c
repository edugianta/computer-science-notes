/*
 * =====================================================================================
 *
 *       Filename:  pythagros_solver.c
 *
 *    Description: Given the two shortest sides of a right triangle, solve for hypotenuse  
 *  
 *        Version:  1.0
 *        Created:  09/10/2025 04:29:22 p.m.
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
  double first_side;
  double second_side;

  printf("Enter the first and second side >>> \n");
  scanf("%lf %lf", &first_side, &second_side);

  double hypotenuse = sqrt( (first_side*first_side)+(second_side*second_side)  );

  printf("Your hypotenuse is %lf cm\n", hypotenuse);

  return 0;
}
