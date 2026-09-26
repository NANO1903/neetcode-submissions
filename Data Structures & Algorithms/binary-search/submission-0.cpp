/*
You are given an array of distinct integers nums, sorted in ascending order, and an integer target.

Implement a function to search for target within nums. If it exists, then return its index, otherwise, return -1.

Your solution must run in O(logn) time.

Example 1:

Input: nums = [-1,0,2,4,6,8], target = 4

Output: 3
Example 2:

Input: nums = [-1,0,2,4,6,8], target = 3

Output: -1
Constraints:

1 <= nums.length <= 10000.
-10000 < nums[i], target < 10000
All the integers in nums are unique.
*/

class Solution {
public:
    int binary_search(int l, int r, vector<int>& nums, int target) {
        if (l > r) return -1;
        int m = l + (r - l) / 2;
        
        if (nums[m] == target) return m;
        return ((nums[m] < target) ?
            binary_search(m + 1, r, nums, target) :
            binary_search(l, m - 1, nums, target)); 
    }

    int search(vector<int>& nums, int target) {
        return binary_search(0, nums.size() - 1, nums, target);
    }
};
