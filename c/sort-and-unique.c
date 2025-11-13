/*
 * =====================================================================================
 *
 *       Filename:  sort-and-unique.c
 *
 *    Description:  Sort ascending and print all unique elements
 *  
 *        Version:  1.0
 *        Created:  29/10/2025 10:30:18 a.m.
 *       Revision:  none
 *       Compiler:  gcc
 *  
 *         Author:  eduardogiantaglia (),
 *   Organization:
 *
 * =====================================================================================
 */

#include <stdio.h>

void sort(int* nums, int size);
void unique(int* nums, int size);


int main() {
  int nums = {1,3,5,6,4,2};
}

void sort(int* nums, int size) {
      for (int i = 0; i < size - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < nums; j++) {
            if (nums[j] < nums[min_idx]) {
              
                min_idx = j;
            }
        }
        
        int temp = nums[i];
        nums[i] = nums[min_idx];
        nums[min_idx] = temp;
    }

}

void unique(int* nums, int size) {
  int isUnique = 0;
  bool foundPair = false;
  while(isUnique < size) {
    for(int i = 0; i < size; i++){
      if((nums[i] == nums[isUnique]) && (i != isUnique)) {
        foundPair = false;
      }

    }

  } 


}
