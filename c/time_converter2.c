/*
 * =====================================================================================
 *
 *       Filename:  time_converter2.c
 *
 *    Description:  Extension of time converter.  
 *  
 *        Version:  1.0
 *        Created:  09/10/2025 05:09:21 p.m.
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

int main(){

  int hour, minute, second;

  printf("Enter the time >>>\n");
  scanf("%d:%d:%d", &hour, &minute, &second); // Basic format specifier using scanf

  int total_seconds = hour*60*60 + minute*60 + second;

  printf("The total numbe of seconds in your given time is %d", total_seconds);
}
