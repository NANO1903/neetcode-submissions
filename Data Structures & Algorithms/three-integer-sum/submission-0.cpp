class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        unordered_map<int, int> dic;
        
        sort(nums.begin(), nums.end());
        
        for (int num : nums) {
            dic[num]++;
        }

        for (int i = 0; i < nums.size(); ++i) {
            dic[nums[i]]--;

            if (i > 0 && nums[i] == nums[i - 1]) continue;

            for (int j = i + 1; j < nums.size(); ++j) {
                dic[nums[j]]--;

                if (j > i + 1 && nums[j] == nums[j - 1]) continue;

                int target = -(nums[i] + nums[j]);
                if (dic[target] > 0) {
                    res.push_back({nums[i], nums[j], target});
                }
            }

            for (int j = i + 1; j < nums.size(); ++j) {
                dic[nums[j]]++;
            }
        }

        return res;
    }
};
