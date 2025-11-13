/*
 * =====================================================================================
 *
 *       Filename:  menu-calc.c
 *
 *    Description:  Menu calc https://moodle.nottingham.ac.uk/pluginfile.php/11798285/mod_resource/content/5/AE1PGA%20Lab%203.pdf
 *  
 *        Version:  1.0
 *        Created:  16/10/2025 04:50:56 p.m.
 *       Revision:  none
 *       Compiler:  gcc
 *  
 *         Author:  eduardogiantaglia (),
 *   Organization:
 *
 * =====================================================================================
 */

#include <stdio.h>

int main(){
  int choice;
  printf("Main Menu\n1.Add two nums\n2.Multiply two nums.\n3.Mod two nums\n4.Exit\n");
  printf("Enter your choice >>>");
  scanf("%d",&choice);
  int num1, num2;
  printf(">>>\n"); 
  scanf("%d %d", &num1, &num2);
  if (choice == 1){
    printf("%d", num1+num2); 
  }
  if(choice == 2) {
    printf("%d", num1*num2); 
  }
  if(choice == 3){
    printf("%d", num1 % num2);
  }
}
