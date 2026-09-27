/*
Given an array of integers nums, find the subarray with the largest sum and return the sum.

A subarray is a contiguous non-empty sequence of elements within an array.

Example 1:

Input: nums = [2,-3,4,-2,2,1,-1,4]

Output: 8
Explanation: The subarray [4,-2,2,1,-1,4] has the largest sum 8.

Example 2:

Input: nums = [-1]

Output: -1
Constraints:

1 <= nums.length <= 100,000
-10,000 <= nums[i] <= 10,000
*/

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currSum = 0;
        int maxSub = nums[0];

        for (int num : nums) {
            if (currSum < 0) currSum = 0;
            currSum += num;

            maxSub = max(currSum, maxSub);
        }

        return maxSub;
    }
};
