/*
 * =====================================================================================
 *
 *       Filename:  typhoon.c
 *
 *    Description:  Program which takes wind-speed as input and outputs the classification of intensity using JTWC 
 *  
 *        Version:  1.0
 *        Created:  09/10/2025 04:43:19 p.m.
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
  double wind_speed;

  printf("Enter the windspeed >>> \n");
  scanf("%lf", &wind_speed);

  if (wind_speed <= 62) {
    printf("You are in a tropical depression");
  }
  if ((wind_speed >= 63) && (wind_speed <= 118)) {
    printf("You're in a typhoon");
  }
  if ((wind_speed >= 119) && (wind_speed <= 156)) {
    printf("You're in a strong typhoon");
  }
  if ((wind_speed >= 157) && (wind_speed <= 192)) {
    printf("You're in a very strong typhoon");
  }
  if (wind_speed >= 193) {
    printf("You're in a violent typhoon");
  }
  return 0;
}
