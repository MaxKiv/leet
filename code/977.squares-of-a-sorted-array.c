// Category: algorithms
// Level: Easy
// Percent: 73.04236%
//
//
//
// Given an integer array nums sorted in non-decreasing order, return an array
// of the squares of each number sorted in non-decreasing order.
//
//  
// Example 1:
//
// Input: nums = [-4,-1,0,3,10]
// Output: [0,1,9,16,100]
// Explanation: After squaring, the array becomes [16,1,0,9,100].
// After sorting, it becomes [0,1,9,16,100].
//
//
// Example 2:
//
// Input: nums = [-7,-3,2,3,11]
// Output: [4,9,9,49,121]
//
//
//  
// Constraints:
//
//
// 	1 <= nums.length <= 10⁴
// 	-10⁴ <= nums[i] <= 10⁴
// 	nums is sorted in non-decreasing order.
//
//
//  
// Follow up: Squaring each element and sorting the new array is very trivial,
// could you find an O(n) solution using a different approach?

#include <stdio.h>
#include <stdlib.h>

void printOut(int *out, int outSize) {
  // printf("out: ");
  for (int i = 0; i < outSize; ++i) {
    // printf(" %d", out[i]);
  }
  // printf("\n");
}

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *sortedSquares(int *nums, int numsSize, int *returnSize) {
  int *out = malloc(numsSize * sizeof(int));
  *returnSize = numsSize;

  int *lhs = nums;
  int *rhs = nums + numsSize - 1;

  for (int i = numsSize - 1; i >= 0; --i) {
    // printf("*lhs: %d, *rhs: %d\n", *lhs, *rhs);
    if ((*lhs * *lhs) > (*rhs * *rhs)) {
      out[i] = *lhs * *lhs;
      ++lhs;
    } else {
      out[i] = *rhs * *rhs;
      --rhs;
    }
    // printf("out[i]: %d\n", out[i]);
  }

  return out;
}
