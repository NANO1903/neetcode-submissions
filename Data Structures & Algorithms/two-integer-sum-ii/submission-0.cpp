class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l = 0;
        int r = numbers.size() - 1;

        while (l < r) {
            int currSum = numbers[l] + numbers[r];
            if (currSum < target) l++;
            if (currSum > target) r--;
            if (currSum == target) return {l + 1, r + 1};
        }
        
        return vector<int>();
    }
};
