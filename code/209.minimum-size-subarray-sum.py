# Category: algorithms
# Level: Medium
# Percent: 48.5253%
#
#
#
# Given an array of positive integers nums and a positive integer target, return the minimal length of a subarray whose sum is greater than or equal to target. If there is no such subarray, return 0 instead.
#
#
# Example 1:
#
# Input: target = 7, nums = [2,3,1,2,4,3]
# Output: 2
# Explanation: The subarray [4,3] has the minimal length under the problem constraint.
#
#
# Example 2:
#
# Input: target = 4, nums = [1,4,4]
# Output: 1
#
#
# Example 3:
#
# Input: target = 11, nums = [1,1,1,1,1,1,1,1]
# Output: 0
#
#
#
# Constraints:
#
#
# 	1 <= target <= 10⁹
# 	1 <= nums.length <= 10⁵
# 	1 <= nums[i] <= 10⁴
#
#
#
# Follow up: If you have figured out the O(n) solution, try coding another solution of which the time complexity is O(n log(n)).


class Solution(object):
    def minSubArrayLen(self, target, nums):
        """
        :type target: int
        :type nums: List[int]
        :rtype: int
        """
        current_sum = 0
        min_subarray_len = 1000001
        (l, r) = (0, 0)

        # print(f"Finding minimum sub array lenght of sum > {target} in {nums}")

        for num in nums:
            r += 1
            current_sum += num
            # print(f"{current_sum}")

            while current_sum >= target:
                # print(f"{current_sum} > {target}")
                # print(f"slice: {nums[l:r]}")
                min_subarray_len = min(min_subarray_len, r - l)
                current_sum -= nums[l]
                l += 1
                # print( f"new sum {current_sum} new minimum array len: {min_subarray_len}")

        return 0 if min_subarray_len == 1000001 else min_subarray_len
