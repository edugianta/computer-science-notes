/*
 * =====================================================================================
 *
 *       Filename:  main_menu.c
 *
 *    Description: Program to create a number-option based main menu.  
 *  
 *        Version:  1.0
 *        Created:  15/10/2025 10:05:03 a.m.
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
  int choice = 0;
  printf("Main Menu\n1. Load Data from File\n2. Save Current Data to File\n3. View Students\n4. Add Student\n5. Delete Student\n6. Show Class Stats\n7. Show Final Grades\n8. Quit");
 
  while(choice != 8) {
    printf("\n>>>");
    scanf("%d",&choice);
    if ((choice < 1) || (choice > 8)) {
        printf("Output a valid choice!");
    } else {
      printf("You chose something ");
  } 
}
}
