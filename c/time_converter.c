/*
 * =====================================================================================
 *
 *       Filename:  time_converter.c
 *
 *    Description:  Given seconds, convert into hours minutes seconds.  
 *  
 *        Version:  1.0
 *        Created:  09/10/2025 04:58:53 p.m.
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
  
  int seconds;
  int hours = 0;
  int minutes = 0;

  printf("Enter the number of seconds >>>\n");
  scanf("%d", &seconds);
  while (seconds >= 3600) {
      hours++;
      seconds = seconds - 3600;
  }
  while (seconds >= 60){
      minutes++;
      seconds = seconds - 60;
  }

  printf("Your time in hh:mm:ss is %d:%d:%d", hours, minutes, seconds);
}
