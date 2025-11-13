/*
 * =====================================================================================
 *
 *       Filename:  intersection-of-two-arrays.c
 *
 *    Description:  Intersection of two arrays 
 *  
 *        Version:  1.0
 *        Created:  23/10/2025 04:03:19 p.m.
 *       Revision:  none
 *       Compiler:  gcc
 *  
 *         Author:  eduardogiantaglia (),
 *   Organization:
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <stdbool.h>
int main() {
  
  int set1[10];
  int set2[10];
  size_t n = sizeof(set1)/sizeof(set1[0]);
  int result[n];
  return 0;

}

void intersection(int* nums1, int* nums2, int* result){
  int slow = 0;
  int fast;
  while(slow < 10) {
    if(nums1[slow] == nums2[fast]) {
      int loc = 0;
      while(nums1[slow] == nums2[fast]){
        result[loc] = nums1[slow];
        fast++;
        slow++;
      }
    }
    if(fast == 10) { slow++; fast = 0; }
    fast++;
  }
}
