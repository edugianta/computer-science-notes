/*
 * =====================================================================================
 *
 *       Filename:  encrypt-decrypt.c
 *
 *    Description:  Encrypt and decrypt textbook 3.48
 *  
 *        Version:  1.0
 *        Created:  16/10/2025 04:29:48 p.m.
 *       Revision:  none
 *       Compiler:  gcc
 *  
 *         Author:  eduardogiantaglia (),
 *   Organization:
 *
 * =====================================================================================
 */

#include <stdio.h>

int encryptDigit(int digit); 
int decryptDigit(int encrypted);

int main() {
  /*
  * Replace each digit with the result of adding 7
  to the digit and getting the remainder after dividing the new value by 10. Then swap the first digit
  with the third, and swap the second digit with the fourth.
  */
  int digit;
  int choice;
  printf("Enter your digit >>>\n");
  scanf("%d", &digit);
  printf("Do you want this digit encrypted (1) or decrypted (0)?");
  scanf("%d", &choice);
  if(choice == 1) {printf("%d", encryptDigit(digit));}
  if(choice == 0) {printf("%d", decryptDigit(digit));}
}

int encryptDigit(int digit) { 
  int firstDigit = digit / 1000;
  int secondDigit = (digit / 100) % 10;
  int thirdDigit = (digit / 10) % 10;
  int fourthDigit = (digit % 10);
  
  firstDigit = (firstDigit + 7) % 10;
  secondDigit = (secondDigit + 7) % 10;
  thirdDigit = (thirdDigit + 7) % 10;
  fourthDigit = (fourthDigit + 7) % 10;
  // third, fourth, first, second
  int newDigit = (thirdDigit * 1000) + (fourthDigit * 100) + (firstDigit * 10) + (secondDigit);
  return newDigit;
}

int decryptDigit(int encrypted) {
    int thirdDigit = encrypted / 1000;
    int fourthDigit = (encrypted / 100) % 10;
    int firstDigit = (encrypted / 10) % 10;
    int secondDigit = encrypted % 10;

    firstDigit = (firstDigit - 7 + 10) % 10;
    secondDigit = (secondDigit - 7 + 10) % 10;
    thirdDigit = (thirdDigit - 7 + 10) % 10;
    fourthDigit = (fourthDigit - 7 + 10) % 10;

    int original = (firstDigit * 1000) + (secondDigit * 100) + (thirdDigit * 10) + fourthDigit;
    return original;
}
