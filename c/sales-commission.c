/*
 * =====================================================================================
 *
 *       Filename:  sales-commission.c
 *
 *    Description:  Sales commission textbook 3.18 
 *  
 *        Version:  1.0
 *        Created:  16/10/2025 04:14:18 p.m.
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
  double sales;
  printf("Enter the sales they made >>>\n");
  scanf("%lf", &sales);
  
  double salary = 200.0 + (sales*0.09);
  printf("Their salary is $%lf", salary);
}
