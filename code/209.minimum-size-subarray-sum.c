// Category: algorithms
// Level: Medium
// Percent: 48.5253%
//
//
//
// Given an array of positive integers nums and a positive integer target,
// return the minimal length of a subarray whose sum is greater than or equal to
// target. If there is no such subarray, return 0 instead.
//
//  
// Example 1:
//
// Input: target = 7, nums = [2,3,1,2,4,3]
// Output: 2
// Explanation: The subarray [4,3] has the minimal length under the problem
// constraint.
//
//
// Example 2:
//
// Input: target = 4, nums = [1,4,4]
// Output: 1
//
//
// Example 3:
//
// Input: target = 11, nums = [1,1,1,1,1,1,1,1]
// Output: 0
//
//
//  
// Constraints:
//
//
// 	1 <= target <= 10⁹
// 	1 <= nums.length <= 10⁵
// 	1 <= nums[i] <= 10⁴
//
//
//  
// Follow up: If you have figured out the O(n) solution, try coding another
// solution of which the time complexity is O(n log(n)).

// int target = 7
// int input[] = {1, 2, 3, 4, 5};

#include <stdint.h>
#include <stdio.h>

// Slide a window of varying size and check if window sum equals target
// - If it is equal to target track minimum size and move window left by 1
// - If it exceeds target track minimum size and move left window boundary
// - If target exceeds sum increase the window right boundary
int minSubArrayLen(int target, int *nums, int numsSize) {
  // printf("target: %d\n", target);
  int window_left = 0;
  int window_right = 0;
  int window_size = 0;
  int minimal_subarray_size = 0;
  int current_sum = 0;

  for (; window_right < numsSize; ++window_right) {
    // while (window_right < numsSize && window_left < numsSize) {

    // printf("window [%d, %d]\n", window_left, window_right);
    window_size = window_right - window_left + 1;
    current_sum += nums[window_right];
    // printf("sum: %d\n", current_sum);

    if (current_sum > target) {
      if (minimal_subarray_size == 0 || minimal_subarray_size > window_size) {
        minimal_subarray_size = window_size;
      }
      current_sum -= nums[window_left];
      current_sum -= nums[window_right];
      ++window_left;
      --window_right;
    } else if (current_sum == target) {
      if (minimal_subarray_size == 0 || minimal_subarray_size > window_size) {
        minimal_subarray_size = window_size;
      }
      current_sum -= nums[window_left];
      ++window_left;
    }
  }

  return minimal_subarray_size;
}
