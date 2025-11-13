/*
 * =====================================================================================
 *
 *       Filename:  space_numbers.c
 *
 *    Description:  A program that reads a five digit number and spaces out its digits by three spaces. 
 *  
 *        Version:  1.0
 *        Created:  09/10/2025 05:13:02 p.m.
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

  // The textbook suggests using remainders and integer division, but instead, can't we just use a format specifier?
  
  int magic_number;

  int digit_one,digit_two,digit_three,digit_four,digit_five;

  printf("Enter your magic number>>>\n");
  scanf("%1d%1d%1d%1d%1d", &digit_one,&digit_two,&digit_three,&digit_four,&digit_five); // not elegant at all but whatever

  printf("Spaced out:\n %d   %d   %d   %d   %d", digit_one,digit_two,digit_three,digit_four,digit_five);
}
