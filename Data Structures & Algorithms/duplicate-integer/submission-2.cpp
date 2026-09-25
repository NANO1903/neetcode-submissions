/*
Given an integer array nums, return true if any value appears more than once in the array, otherwise return false.

Example 1:

Input: nums = [1, 2, 3, 3]

Output: true

Example 2:

Input: nums = [1, 2, 3, 4]

Output: false

*/

#include <unordered_set>

using std::unordered_set;

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> uSet;

        for (auto num : nums) {
            auto inserted = uSet.insert(num);

            if (inserted.second == 0) return true;
        }
        return false;   
    }
};